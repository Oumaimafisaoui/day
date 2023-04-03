#include <iostream>
#include <cmath>

//there is a math behind it
using namespace std;

void printRow(int spaces, int blocks) {
    // prints a row of the pyramid
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout << "/";
    for (int i = 0; i < blocks; i++) {
        cout << "*";
    }
    cout << "\\" << endl;
}

void drawSastantua(int height) {
    int row = 1; // current row number
    int base = 3; // number of blocks in the first row of the pyramid
    int blocks = base; // number of blocks in the current row
    int spaces; // number of spaces before the first block in the current row

    // loop through each row of the pyramid
    while (row <= height) {
        // calculate number of spaces before the first block in the current row
        spaces = (pow(2, height + 2) - pow(2, row + 1)) / 2;

        // print top section of the row
        printRow(spaces, blocks);

        // calculate number of blocks in the middle section of the row
        if (row >= base) {
            blocks += (row % 2 == 0) ? row + 1 : row;
        }

        // print middle section of the row
        if (row < height) {
            for (int i = 0; i < pow(2, row - 1); i++) {
                spaces--;
                blocks--;
                printRow(spaces, blocks);
            }
        }

        // calculate number of blocks in the bottom section of the row
        if (row >= base) {
            blocks += (row % 2 == 0) ? row + 1 : row;
        }

        // print bottom section of the row
        if (row < height) {
            printRow(spaces, blocks);
        }

        row++; // move to the next row
    }
}

int main() {
    int height;
    cout << "Enter pyramid height: ";
    cin >> height;

    drawSastantua(height);

    return 0;
}

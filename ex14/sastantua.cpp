
#include <iostream>
#include <string>
using namespace std;

bool is_digits(const std::string& str)
{
    for (std::string::size_type i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}


void level(int rows, int columns, int decal)
{
    int j;

    for(int i = 0; i < rows; i++)
    {
        j = -decal;
        while(j < rows - i - 1)
        {
            cout << " ";
            j++;
        }
        j += rows - i - 1;
        cout << "/";
        while(j < columns - 2)
        {
            if (i == rows - 1 && j == (columns - 2) / 2)
            {
                cout << "|";
            }
            else
                cout << "*";
            j++;
        }
        cout << "\\";
        cout << "\n"; 
    }
}

int calculate_col(int i)
{
    if (i == 0)
        return (7);
    return (calculate_col(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void sastantua(int height)
{
    int rows;
    int columns;
    int decal;

    for(int i = 0; i < height; i++)
    {
        decal = (calculate_col(height - 1) - calculate_col(i)) / 2;
        rows = 3 + i;
        columns = calculate_col(i);
        level(rows, columns, decal);
    }
}

int main(int argc, char **argv) 
{
    if(argc == 2)
    {
        std::string arg = argv[1];
        if(is_digits(arg))
        {
            int height = stoi(arg);

            // if(height >= 1 && height <= 5)
            // {
                sastantua(height);
            // }
        }
}
}
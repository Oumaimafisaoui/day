#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    if(argc == 2)
    {
            if (atoi(argv[1]))
            {
            int rows = atoi(argv[1]);
            for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
            for(int space = 1; space <= rows - i; ++space) {
                cout << "  ";
            }

            while(k != 2 * i - 1) {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
    }
}
}
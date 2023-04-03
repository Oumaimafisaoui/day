
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

int main(int argc, char **argv) 
{
    if(argc == 2)
    {
        std::string arg = argv[1];
        if(is_digits(arg))
        {
            int height = stoi(arg);



            if(height > 1 && height <=5)
            {
                int rows = height + 2;
                int init = 4;

                int flag = 0;
                for (int i = 1; i <= rows; i++)
                {
                    if(i == rows)
                        flag = 1;
                    //spaces
                    for(int j = 1; j <= rows - i; j++)
                    {
                        cout << " ";

                    }
                    cout << "/";
                    for(int k = 1; k <= (i * 2) - 1; k++)
                    {
                        if(flag == 1 && k == i)
                        {
                            cout << "|";
                            continue;
                        }
                        else
                            cout << "*";
                    }
                    cout << "\\";
                    cout << endl;
                }

            }
            // int height = stoi(arg);
            // int rows = height + 2;
            // int init = 4;

            // int flag = 0;
            // for (int i = 1; i <= rows; i++)
            // {
            //     if(i == rows)
            //         flag = 1;
            //     for(int j = 1; j <= init - i - 1; j++)
            //     {
            //         cout << " ";

            //     }
            //     cout << "/";
            //     for(int k = 1; k <= i; k++)
            //     {
            //         if(flag == 1 && k == init - 1)
            //         {
            //             cout << "|";
            //             break ;
            //         }
            //         else
            //             cout << "*";
            //     }
            //     cout << endl;
            // }
        }
}
}
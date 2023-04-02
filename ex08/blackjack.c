#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int result = 0;
    int ace = 0;
    if(argc == 2)
    {
        for(int i = 0; i < strlen(argv[1]); i++)
        {
            if(isdigit(argv[1][i]) && argv[1][i] >= 2 && argv[1][i] <= 9)
            {
                result += argv[1][i];
            }
            else if (!strcmp(argv[1][i], 'J') || !strcmp(argv[1][i], 'Q') ||!strcmp(argv[1][i], 'K'))
            {
                result += 10;
            }
            else if (!strcmp(argv[1][i], 'A'))
            {
                ace++;
            }
        }
        if(ace > 1)
        {
            
        }
        else if (ace == 0)
        {
            return result;
        }
    }
    return (1);
}
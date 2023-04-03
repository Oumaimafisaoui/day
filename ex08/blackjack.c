#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int result = 0;
    int ace = 0;
    if(argc == 2)
    {
        for(int index = 0; index < strlen(argv[1]); index++)
        {
            if(isdigit(argv[1][index]) && (argv[1][index] - '0') >= 2 && (argv[1][index] - '0') <= 9)
            {
                result += argv[1][index] - '0';
            }
            else if (argv[1][index] == 'J' || argv[1][index] ==  'Q' || argv[1][index] ==  'K' || argv[1][index] ==  'D' || argv[1][index] == 'T')
            {
                result += 10;
            }
            else if (argv[1][index] ==  'A')
            {
                result += 11;
                ace++;
            }
        }
        while(ace > 0 && result > 21)
        {
            result -= 10;
            ace--;
        }
        if (result == 21)
        {
            printf("Blackjack!\n");
        }
        else
            printf("%d\n", result);
    }
    return 1;
}
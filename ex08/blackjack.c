#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int result = 0;
    int ace = 0;
    if(argc == 2)
    {
        for(int i = 0; i < strlen(argv[1]); i++)
        {
            if(isdigit(argv[1][i]) && (argv[1][i] - '0') >= 2 && (argv[1][i] - '0') <= 9)
            {
                result += argv[1][i] - '0';
            }
            else if (argv[1][i] == 'J' || argv[1][i] ==  'Q' || argv[1][i] ==  'K' || argv[1][i] ==  'D' || argv[1][i] == 'T')
            {
                result += 10;
            }
            else if (argv[1][i] ==  'A')
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

}
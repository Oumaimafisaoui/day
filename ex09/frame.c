#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int has_alphanumeric(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) || isdigit(str[i])) {
            return 1;
        }
    }
    return 0;
}


size_t max_length(char *str)
{
    if (has_alphanumeric(str))
    {
        char *string = strtok(strdup(str), " ");
        size_t max = strlen(string) + 4;
        int flag = 0;
        while(string != NULL)
        {
            if (strlen(string) + 4 >  max)
            {
                max = strlen(string) + 4;
            }
            string = strtok(NULL, " ");
        }
        return max;
    }
    return (0);
}

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        for(int i = 1 ; i < argc; i++)
        {
            if(strlen(argv[i]) > 0)
            {
                size_t max = max_length(argv[i]);
                if(max > 0)
                {
                    char *string = strtok(strdup(argv[i]), " ");
                    int k = 0;
                    while (k < max)
                    {
                        printf("*");
                        k++;
                    }
                    printf("\n");
                    while(string != NULL)
                    {
                        printf("* %s", string);
                        int j = 0;
                        while (j <= max - strlen(string) - 4)
                        {
                            printf(" ");
                            j++;
                        }
                        printf("*\n");
                        string = strtok(NULL, " ");
                    }
                    k = 0;
                    while (k < max)
                    {
                        printf("*");
                        k++;
                    } 
                    printf("\n");

                }
            }
        }
    }
    return 0;
}

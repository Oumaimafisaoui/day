#include <stdio.h>
#include <string.h>


size_t max_length(char *str)
{
    char *string = strtok(str, " ");
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

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        for(int i = 1; i < argc ; i++)
        {
            if(strlen(argv[i]) > 0)
            {
                size_t max = max_length(argv[i]);
                printf("max = %zu", max);
                char *string = strtok(argv[i], " ");
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

    return 0;
}

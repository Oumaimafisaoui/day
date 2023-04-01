#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *string = strtok(argv[1], " ");
        int flag = 0;
        size_t len = strlen(string) + 4;
        while(string != NULL)
        {
            int j = 0;
            if(flag == 0)
            {
                while(j < len)
                {
                    printf("*");
                    j++;
                }
                printf("\n");
            }
            flag = 1;
            printf("* ");
            printf("%s" , string);
            int k = 0;
            while(k < len - strlen(string) - 4)
            {
                printf(" ");
                k++;
            }
            printf(" *\n");
            string = strtok(NULL, " ");
        }
        int j = 0;
        while(j < len)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
}
#include<stdio.h>
#define size 10
/**
 * main - read from the file string by string
 *
 * Return: 0 always (success)
 */
int main(void)
{
    FILE *fp = fopen("new.txt", "r");
    char str[size];


    if (fp != NULL)
    {
        while (fgets(str, size, fp) != NULL)
        {
            printf("%s", str);
        }
        fclose(fp);
    }

    printf("\n");
    return 0;
}
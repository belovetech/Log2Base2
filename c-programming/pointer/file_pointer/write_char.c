#include<stdio.h>
#define size 10
/**
 * main - read from the file string by string
 *
 * Return: 0 always (success)
 */
int main(void)
{
    FILE *fp = fopen("new.txt", "w");
    char str[size];

    if (fp != NULL)
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);
        
        fclose(fp);
    }

    printf("\n");
    return 0;
}
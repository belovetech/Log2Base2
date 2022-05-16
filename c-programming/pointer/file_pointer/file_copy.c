#include<stdio.h>
#define size 20
/**
 * main - read from the file string by string
 *
 * Return: 0 always (success)
 */
int main(void)
{
    FILE *fr = fopen("text.txt", "r");
    FILE *fw = fopen("file_copy.txt", "w");
    char str[size];

    if (fr && fw)
    {
        while (fgets(str, size, fr) != NULL)
        {
            fputs(str, fw);
        }
        fclose(fr);
        fclose(fw);
    }
    return 0;
}
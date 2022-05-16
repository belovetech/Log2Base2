#include<stdio.h>

/**
 * main - read from the file character by character
 *
 * Return: 0 always (success)
 */

int main(void)
{
    FILE *fp;

    fp = fopen("text.txt", "r");

    if (fp != NULL)
    {
        char letter = fgetc(fp);

        while (letter != EOF)
        {
            printf("%c", letter);

            letter = fgetc(fp);
        }
    }
    fclose(fp);
    printf("\n");
    return 0;
}
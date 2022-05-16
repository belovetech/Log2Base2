#include<stdio.h>
#define size 20
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
        fputs("Hello ", fp);
        
        printf("Enter your name: ");
        scanf("%s", str);
        
        fputs(str, fp);
        fclose(fp);
    }

    printf("\n");
    return 0;
}
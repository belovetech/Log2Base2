#include<stdio.h>
#include<string.h>

/**
 * main - prints string starting from the last character
 *
 * Return: 0 always (success)
 */
int main(void)
{
    char str[50];
    int len;
    
    printf("Enter string (<= 50 characters): ");
    scanf("%s", str);
    
    len = strlen(str);
    len = len -1;
    
    for(len; len >= 0; len--)
        printf("%s\n", str+len);

    return 0;
}


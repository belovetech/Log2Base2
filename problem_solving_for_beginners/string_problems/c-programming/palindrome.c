#include <stdio.h>
#include <stdlib.h>
/**
 * palindrome - Check wheather a string is a palindrome or not
 * @str: String to check
 * Return: print Palindrome Otherwise Not Palindrome
 */
void palindrome(char *str)
{
    char *copy, tmp;
    int len = 0, i, lastidx;

    // find the length
    for (i = 0; str[i]; i++)
        len++;

    // Allocate memory
    copy = malloc(sizeof(char) * len);

    // copy the string
    for (i = 0; str[i]; i++)
        copy[i] = str[i];
    copy[i] = '\0';

    // Reverse the original string
    lastidx = len - 1;
    for (i = 0; i < len/2; i++)
    {
        tmp = str[i];
        str[i] = str[lastidx - i];
        str[lastidx - i] = tmp;
    }

    // Compare the reversed string with copied string
    i = 0;
    while (str[i] != '\0' && copy[i] != '\0' && str[i] == copy[i])
        i++;

    // print Palindrome if they are eqaul otherwise Non Palindrome
    if (str[i] == '\0' && copy[i] == '\0')
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    free(copy);
    copy = NULL;
}

int main(void)
{
	char str[10];
	printf("Enter a string: ");
	scanf("%s", str);

	//Write your code here
	palindrome(str);
	return 0;
}
#include<stdio.h>
/**
 * main - Find the length of a string
 *
 * Return: 0 Always (success)
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
        len++;

    return (len);
}
int main(void)
{
	char str[1024];
	printf("Enter a string: ");
	scanf("%s", str);

	//Write your code here
    int len = 0;

    len = _strlen(str);

	printf("%d %d\n", len);
	return 0;
}
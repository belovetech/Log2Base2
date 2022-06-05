#include<stdio.h>

/**
 * _strcpy - Copies string to another string
 * @src: source
 * @dest: destination
 * 
 * Return: Pointer to the destination
 */
char *_strcpy(char *src, char *dest)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
	{
	    dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

int main(void)
{
	char str[10], copy_str[10];
    

	printf("Enter  a string: ");
	scanf("%s", str);

    _strcpy(str, copy_str);

	printf("Copied string = %s\n",copy_str);
	return 0;
}
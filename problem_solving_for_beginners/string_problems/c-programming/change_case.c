#include<stdio.h>
/**
 * main - Change uppercase to lowercase and vice versa
 * Return: 0 always (success)
 */
int main(void)
{
	char str[10];
	printf("Enter a string: ");
	scanf("%s", str);

	//Write your code here
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
	    if (str[i] >= 65 && str[i] <= 90)
	        str[i] +=  32;
	    else
	        str[i] -= 32;
	}

	printf("%s\n", str);
	return 0;
}
#include<stdio.h>
/**
 * main - Count vowels in a string
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	char str[10];
	printf("Enter a string: ");
	scanf("%s", str);

	//Write your code here
	char vowels[] = {'a', 'e', 'i', 'o', 'u', '\0'};
	int count = 0, i, j;
	
	for (i = 0; str[i] != '\0'; i++)
	{
	    for (j = 0; vowels[j] != '\0'; j++)
	    {
	        if (str[i] == vowels[j])
	            count++;
	    }
	}
    printf("%d\n", count);
	return 0;
}
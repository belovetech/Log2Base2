#include<stdio.h>
/***
 * main - Toggle nth bit of a given number using bitwise
 */
int main(void)
{
	int num, n, res;

    printf("Enter number and nth bit you want to disable: ");
	scanf("%d%d", &num,&n);

	//Write your code here
    res = num ^ (1 << (n - 1));

    printf("%d\n", res);

	return 0;
}
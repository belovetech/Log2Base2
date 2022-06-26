#include<stdio.h>
/***
 * main -Checks nth bit if it's set or unset using bitwise
 * 
 * description: Bitwise LEFT SHIFT is used to shift to nth bit to check
 * then bitwise AND to check. zero (0) is return if it's unset 
 * otherwise any other number aside from zero
 * 
 * Return: prints ON otherwise OFF
 */
 
 int main(void)
 {  
     int num, n, res;
     
     printf("Enter number and nth bit you want to enable: ");
     scanf("%d%d", &num, &n);


    	
	res = num & (1 << (n - 1));
	
	if (res)
	    printf("ON\n");
	else
	    printf("OFF\n");
	    
	return 0;
}

#include<stdio.h>

/**
 * main - checks whether the 2nd bit is still on.
 * 
 * Return: if 2nd bit is on  print "Yes" otherwise  print "No"
 */
 
 
int main(void)
{
    int status, mask, output;
    
    status = mask = output = 0;
    status |= 2; //enabling 2nd bit
    
    //Write your logic here
    mask = 7;
    output = status & mask;
    
    if (output == 2)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

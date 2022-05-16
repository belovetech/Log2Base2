#include<stdio.h> 
typedef void (*FP)(char *, char *);


/**
 * swap - swaps two characters
 * @a: first operand
 * @b: second operand
 * Return: answer
 */

void swap(char *a, char *b)
{
    char tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * main - prints the resukt of swap using function pointer
 *
 * Return: 0 always (success)
 */

int main(void)
{
   //Edit below this line
    FP fptr;
    char ch1 = 'a';
    char ch2 = 'z';
    
    fptr = swap;
    (*fptr)(&ch1, &ch2);
    
    printf("%c-%c\n", ch1, ch2);
    return 0; 
}
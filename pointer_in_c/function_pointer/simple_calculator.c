#include<stdio.h>

/* Function pointer */
typedef int (*FP)(int, int);

/**
 * sum - sum two integers
 * @a: first operand
 * @a: second operand
 * Return: result
 */
int sum(int a, int b)
{
    return (a + b);
}

/**
 * sub - subtract two integers
 * @a: first operand
 * @a: second operand
 * Return: result
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - multiply two integers
 * @a: first operand
 * @a: second operand
 * Return: result
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * divide - divides two integers
 * @a: first operand
 * @a: second operand
 * Return: result
 */
int divide(int a, int b)
{
    return (a / b);
}

/**
 * mod - finds reminder of two integers
 * @a: first operand
 * @a: second operand
 * Return: result
 */
int mod(int a, int b)
{
    return (a % b);
}

/**
 * execute - execute function passed as arguement
 * @a: first operand
 * @b: second operand
 * @fptr: pointer to a function
 * Return: answer
 */
int execute(int a, int b, FP fptr)
{
    int res;

    res = (*fptr)(a, b);
    return (res);
}


/**
 * main - prints execute function result
 *
 * Return: 0 always (success)
 */

int main(void)
{
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("a + b = %d\n",  execute(a, b, sum));
    printf("a - b = %d\n",  execute(a, b, sub));
    printf("a * b = %d\n",  execute(a, b, mul));
    printf("a / b = %d\n",  execute(a, b, divide));
    printf("a %% b = %d\n", execute(a, b, mod));
    return (0);
}


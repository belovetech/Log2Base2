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
 * mod - finds reminder two integers
 * @a: first operand
 * @a: second operand
 * Return: result
 */
int mod(int a, int b)
{
    return (a % b);
}


/**
 * get_sign - checks sign
 * @ch: first operand
 * Return: pointer to function
 */
FP get_operator(char op)
{
    switch(op)
    {
        case '+':
            return sum;
            break;
        case '-':
            return sub;
            break;
        case '*':
            return mul;
            break;
        case '/':
            return divide;
        case '%':
            return mod;
            break;
        default:
            printf("Select correct opeartor");
    }
}


/**
 * main - prints execute function result
 *
 * Return: 0 always (success)
 */

int main(void)
{
    FP fptr;
    int a, b;
    char sign;
    int ret = 1;

    while (ret)
    {
        printf("Enter your choice of operator:"
            "\n+ (add), - (sub), * (mul), / (div), %% (mod): ");
        scanf("%c", &sign);
        if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '%')
        {
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);

            fptr = get_operator(sign);
            printf("%d %c %d = %d\n",a, sign, b, (*fptr)(a, b));
            ret = 0;
        }
        else
        {
            scanf("%c", &sign);
        }
    }

    return (0);
}


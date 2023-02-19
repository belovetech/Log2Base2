#include <stdio.h>

void decimalToBinary(int num)
{
    if (num <= 0)
        return;
    int rem = num % 2;
    decimalToBinary(num/2);
    printf("%d", rem);
}

int main(void)
{
    int num;
    scanf("%d", &num);

    decimalToBinary(num);
    printf("\n");
    return (0);
}

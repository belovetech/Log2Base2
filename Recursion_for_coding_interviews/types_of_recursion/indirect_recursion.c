#include <stdio.h>

void even();
void odd();

int num = 1;

void even()
{
    if (num == 10)
        return;

    printf(" ODD: %d\n", num);
    num++;
    odd();

}

void odd()
{
    if (num == 10)
        return;

    printf("EVEN: %d\n", num);
    num++;
    even();
}


int main(void)
{
    even();

    return (0);
}

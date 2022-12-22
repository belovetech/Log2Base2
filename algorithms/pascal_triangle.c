#include <stdio.h>
#include <stdlib.h>

void pascalTriangle(int num)
{
    int i, j, c;
    
    for (i = 1; i < num+1; i++)
    {
        for (j = 0; j < num - i; j++)
            printf(" ");

        c = 1;
       
        for (j = 1; j < i + 1; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / j;
            
        }
        printf("\n");
    }
}


int main(int ac, char **av)
{
    
    if (ac > 1)
    {
        int num = atoi(av[1]);
        pascalTriangle(num);
    }
    
    
    return (0);
}
#include<stdio.h>

enum{INT, CHAR, FLOAT, DOUBLE};

struct
{
    int type;
    union
    {
        int    i;
        char   c;
        float  f;
        double d;
    }u;
}s;

/**
 * main - print the corresponding data type  
 * 
 * Return: 0 always (success)  
 */

int main(void)
{
    s.type = CHAR;
    s.u.c = 'a';

    switch (s.type)
    {
        case 0:
            printf("%d\n",s.u.i);
            break;
        case 1:
            printf("%c\n",s.u.c);
            break;
        case 2:
            printf("%f\n",s.u.f);
            break;
        default:
            printf("%lf\n",s.u.d);
    }


    return 0;
}
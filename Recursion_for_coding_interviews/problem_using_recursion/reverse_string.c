#include <stdio.h>
#include <string.h>


void reverse(char str[], int i, int n)
{
    if (i == n/2)
        return;
    char temp = str[i];
    str[i] = str[n-1-i];
    str[n-1-i] = temp;
    reverse(str, i+1, n);
}



int main(int ac, char **av)
{
    if (ac > 1)
    {
        printf("%s\n", av[1]);
        reverse(av[1], 0, strlen(av[1]));
        printf("%s\n", av[1]);
    }

    return (0);
}

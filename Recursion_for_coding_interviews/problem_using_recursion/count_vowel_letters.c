#include <stdio.h>
#include <string.h>


int isVowel(char ch)
{
    if (ch == 'a' || ch == 'A' ||
        ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U') {
        return 1;
    }
    return 0;
}
int countVowels(char str[], int n)
{
    if (n < 0)
        return 0;

    if (isVowel(str[n]))
        return  countVowels(str, n-1) + 1;
    else
        return countVowels(str, n-1) + 0;
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int res = countVowels(av[1], strlen(av[1]));

        printf("%d\n", res);
    }

    return (0);
}

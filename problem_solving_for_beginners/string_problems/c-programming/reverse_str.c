#include<stdio.h>
#include <stdlib.h>

int _len(char *str)
{
    int len = 0;

	while(str[len])
	    len++;

	return (len);
}

void _reverse(char *str)
{
    int len, lastidx, i;
    char tmp;

    len = _len(str);
    lastidx = len - 1;
    for (i = 0; i < len/2; i++)
    {
        tmp = str[i];
        str[i] = str[lastidx - i];
        str[lastidx - i] = tmp;
    }
}

char  *_reverse2(char *str)
{
    int len, lastidx, i, j = 0;
    char *rev_str;

    len = _len(str);
    rev_str = malloc(sizeof(char) * len);
    lastidx = len - 1;

    for (i = lastidx; i >= 0; i--)
        rev_str[j++] = str[i];

    rev_str[j] = '\0';

    return (rev_str);
}

int main(void)
{
	char str[10];
	char *reverse_str;
	printf("Enter a string: ");
	scanf("%s", str);

    // _reverse(str);
    reverse_str = _reverse2(str);


    printf("%s\n", reverse_str);
    free(reverse_str);
    reverse_str = NULL;
	return 0;
}
#include <stdio.h>

/**
 * _strlen - Length of a string 
 * 
 * @str: String to find its length 
 * Return: its length 
 */
int _strlen(char str[])
{
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return (len);
}

/**
 * reverse - Reverse String 
 * 
 * @str: String to reverse
 * @start: The start of the string
 * @end: The end of the string
 */
void reverse(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

/**
 * reverse_words - Reverse individual words 
 * 
 * @str: Words to reverse 
 */
void reverse_words(char str[])
{
    int len  = _strlen(str);
    int wstart = 0;
    int end =  0;
    
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || i == len)
        {
            reverse(str, wstart, end-1);
            wstart = i+1;
        }
        end++;
    }
}


/**
 * reverse_words2 - Reverse words 
 * 
 * @str: Words to reverse 
 */
void reverse_words2(char str[])
{
    int len  = _strlen(str);
    int wstart = 0;
    int end =  0;
    
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str, wstart, end-1);
            wstart = i+1;
        }
        end++;
    }
    reverse(str, wstart, len-1);
}

int main()
{
    char str[] = "Welcome to Log2Base2";
    
    printf("%s\n", str);
    reverse_words(str);
    printf("%s\n", str);
    
    return (0);
}


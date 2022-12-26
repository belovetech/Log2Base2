#include <stdio.h>

/**
 * isAlphabet -  Check if a character is alphabet or not
 * 
 * @s: Character to check 
 * Return: (1) if alphabet otherwise (0)
 */
int isAlphabet(char s)
{
    return (s >= 65 && s <= 90 || s >= 97 && s <= 122);
}

/**
 * _strlen  - find the length of a string
 * 
 * @str: The string
 * Return: The lenght of the string 
 */
int _strlen(char str[])
{
    int len = 0;
    for (len = 0; str[len] != '\0'; len++);
    return (len);
}

/**
 * reverse - Reverse a string without affecting special characters
 * 
 * @str: String to reverse 
 */
void reverse(char str[])
{
    int start = 0;
    int end = _strlen(str)-1;
    
    while (start < end)
    {
        if (!isAlphabet(str[start])) 
            start++;
        else if (!isAlphabet(str[end]))
            end--;
        else
        {
            char temp = str[start];
            str[start++] = str[end];
            str[end--] = temp;
        }
    }
}


int main(void)
{
    // char str[] = "a*bcd,e$";
    // char str[] = "a.bb*ccc^ddd#ee??";
    char str[] = "H#e*l-l^o";
    
    printf("<<<<<Before Reversing>>>>>\n");
    printf("%s\n", str);
    
    reverse(str);
    
    printf("<<<<<After  Reversing>>>>>\n");
    printf("%s\n", str);
    
    return (0);
}
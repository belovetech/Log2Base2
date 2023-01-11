#include "stack.h"

/**
 * stringrev - reverse a string using stack 
 * 
 * @str: String to reverse
 * Return: Reverse string 
 */
char* stringrev(char *str)
{
    int len;
    
    for (len = 0; str[len] != '\0'; len++);
    
    char *temp = malloc(sizeof(char) * len+1);
    if (temp == NULL) return NULL;
    
    for (int i = 0; i < len; i++)
        push(str[i]);
    
    int i = 0;
    while(!isStackEmpty())
        temp[i++] = pop();
    
    return (temp);
}

/**
 * stringrev2 - reverse a string using stack 
 * 
 * @str: String to reverse
 * Return: Reverse string 
 */
char* stringrev2(char str[])
{
    for (int i = 0; str[i]; i++)
        push(str[i]);
    
    int i = 0;
    while(!isStackEmpty())
        str[i++] = pop();
    
    return (str);
}


int main(void)
{
    char *str = "Beloved";
    
    printf("Before => %s\n", str);
    
    char *res = stringrev(str);
    printf("After  => %s\n", res);
    
    char str2[] = "Apple"; 
    stringrev2(str2);
    printf("After  => %s\n", str2);
    
    return (0);
}
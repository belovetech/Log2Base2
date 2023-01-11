#include <stdlib.h>
#include <stdio.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

/**
 * push - push adata into stack 
 * 
 *  @c: The value 
 */
void push(char c)
{
    if (top == SIZE-1)
        return;
    stack[++top] = c;
}

/**
 * pop - remove the topmost data in the stack 
 * 
 * Return: The topmost data in the stack 
 */
char pop()
{
    if (top == -1)
        return -1;
    return stack[top--];
}

/**
 * isStackEmpty - Check if stack is empty or not
 * 
 * Return - 1 if empty otherwise 0 
 */
int isStackEmpty()
{
    if (top == -1)
        return (1);
    return (0);
}

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
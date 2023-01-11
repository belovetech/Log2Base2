#include "stack.h"

/**
 * isBalanced - Check if parentheses is balanced or valid 
 * 
 * @str: The parentheses
 * Return: 1 if valid otherwise 0 
 */
int isBalanced(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        // Put open parenthese into stack
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            push(str[i]);
        else
        {
            // If stack is empty then
            // the first parentheses is closing one
            if (isStackEmpty()) return (0);
            
            // Pop of the topmost element in the stack
            char top = pop();
            
            // Check if the item at the top of the stack
            // matches the next closing parentheses
            if ((str[i] == ')' && top != '(') ||
                (str[i] == ']' && top != '[') ||
                (str[i] == '}' && top != '{'))
                return (0);
        }
    }
    // If valid, the stack should be empty
    return (isStackEmpty());
}

int main(void)
{
    char parentheses[25];
    
    printf("Enter parentheses to test \n");
    scanf("%s", parentheses);
    
    if (isBalanced(parentheses))
        printf("Parentheses are balanced!\n");
    else
        printf("Oops! Invalid parentheses\n");
    
    return (0);
}
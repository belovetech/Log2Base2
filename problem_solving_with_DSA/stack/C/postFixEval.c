#include "stack.h"

/**
 * postFixEval - Evaluate postFix expression
 * 
 * @str - Postfix
 * Return - the result of postfix expression 
 */
int postFixEval(char *str)
{
    int i;
    
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            push(str[i]-'0'); // convert to integer
        else
        {
            int x = pop();
            int y = pop();
            
            switch (str[i])
            {
            case '+':
                push(y+x);
                break;
            case '-':
                push(y-x);
                break;
            case '*':
                push(y*x);
                break;
            case '/':
                push(y/x);
                break;
            }
        }
    }
    return pop();
}


int main(void)
{
    char *postFix = "82+";
    // postFix = "825+*5/";
    postFix = "525+*5/";    
    int res = postFixEval(postFix);
    
    printf("%d\n", res);

    return (0);
}

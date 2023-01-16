#!/usr/bin/env python3
"""Evaluate postfix expression"""

def postFixEval(str: str) -> int:
    """Evaluate postfix expression
    
    Args:
        str (str): postfix expression
        
    Return:
        (int): Result of the expression
    """
    stack = []
    for ch in str:
        if (ch >= '0' and ch <= '9'):
            stack.append(int(ch))
        else:
            x = stack.pop()
            y = stack.pop()
            
            match ch:
                case '+':
                    stack.append(y+x)
                    break
                case '-':
                    stack.append(y-x)
                    break
                case '*':
                    stack.append(y*x)
                    break
                case '/':
                    stack.append(y/x)
                    break
    return stack.pop()
    

if __name__ == '__main__':
    postfix = "82+"
    
    res = postFixEval(postfix)
    print(res)
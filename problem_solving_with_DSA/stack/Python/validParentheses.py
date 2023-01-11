#!/usr/bin/env python3
"""Check for valid or balanced parentheses"""

size = 50
stack = ['' for _ in range(size)]
top = -1

def push(ch: str) -> None:
    """Push ch into stack"""
    global top
    if top == size-1:
        return
    else:
        top += 1
        stack[top] = ch

def pop() -> int:
    """Pop off the top data in the stack"""
    global top
    if top == -1:
        return -1
    else:
        data = stack[top]
        top -= 1
        return data
        
        
def isStackEmpty() -> bool:
    """Check if stack is empty"""
    if (top == -1):
        return True
    else:
        return False
        
def isStackFull() -> bool:
    """Check if stack is full"""
    if (top == size-1):
        return True
    else:
        return False
        
def isBalanced(str: str) -> bool:
    """Check if parenthese is valid"""
    for ch in str:
        if (ch == '(' or ch == '[' or ch == '{'):
            push(ch)
        else:
            if isStackEmpty():
                return False
            
            top = pop()
            
            if ((ch == ')' and top != '(') or
                (ch == ']' and top != '[') or
                (ch == '}' and top != '{')):
                return False
    return isStackEmpty()
        
        
def isValid(str: str) -> bool:
    """Check if parenthese is valid"""
    parentheses = {'(':')', '[':']', '{':'}'}
    stack = []
    for ch in str:
        if (ch in parentheses.keys()):
            stack.append(ch)
        else:
            if stack == []:
                 return False
    
            top = stack.pop()
            
            if ch != parentheses[top]:
                return False
    return stack == []
    


if __name__ == '__main__':
    parentheses = input("Enter parentheses to test\n").strip()
    
    if (isBalanced(parentheses)):
        print("Valid parentheses")
    else:
        print("Oops! Invalid parentheses")
    
    if (isBalanced(parentheses)):
        print("Valid parentheses")
    else:
        print("Oops! Invalid parentheses")
    
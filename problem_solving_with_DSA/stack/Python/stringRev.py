"""Reverse string using stack data structure"""

size = 10
stack = ['' for _ in range(size)]
top = -1

def push(ch: str) -> None:
    """Push ch into stack"""
    global top
    if top == size-1:
        return
    else:
        top += 1
        print(top)
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

def stringrev(s) :
    """Reverse string using stack data structure"""
    temp = ''
    for ch in s:
        push(ch)
        
    for _ in range(len(s)):
        temp += pop()
        
    return temp
    

if __name__ == '__main__':
    value = "Apple"
    
    print(value)
    print(stringrev(value))
    print(stack)

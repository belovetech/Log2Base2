#!/usr/bin/env pyhton3
"""implement two stack in single array method2"""

size = 6
stack = [0 for _ in range(size)]

top1 = -1
top2 = size

    
def push1(val: int) -> None:
    """Push val into stack 1"""
    global top1 # update top1 from global scope
    
    if top1+1 == top2:
        return
    else:
        top1 += 1
        stack[top1] = val

def pop1() -> int:
    """Pop off the top data in the stack 1"""
    global top1
    
    if top1 == -1:
        return -1
    else:
        data = stack[top1]
        top1 -= 1
        return data
    

def push2(val: int) -> None:
    """Push val into stack 2"""
    global top2 # update top2 from global scope
    
    if top2-1 == top1:
        return
    else:
        top2 -= 1
        stack[top2] = val

def pop2() -> int:
    """Pop off the top data in the stack 2"""
    global top2
    
    if top2 == size:
        return -1
    else:
        data = stack[top2]
        top2 += 1
        return data



if __name__ == '__main__':
    push1(10)
    push1(20)
    push1(30)
    push1(40)
    push1(40)
    
    print(pop1())
    print(pop1())
    print(pop1())
    print(pop1())
    print(pop1())
    print(pop1())
    print(pop1())
    
    # push2(40)
    # push2(50)
    # # push2(60)
    # push2(70)
    
    # print(pop2())
    # print(pop2())
    # print(pop2())
    # print(pop2())
    # print(pop2())
    # print(pop2())

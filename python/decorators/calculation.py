def add(a, b):
    return a + b

def mul(a, b):
    return a * b

def calculation(fun, a, b):
    print(fun(a, b))

calculation(add, 5, 10)
calculation(mul, 5, 10)
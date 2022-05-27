#  Lambda function
# var = lambda x, y: x * y
# a  = var(2, 4)
# print(a)

def fun(n):
    return lambda x : x ** n
  
    
square = fun(2)
cube = fun(3)

print(square(6))
print(cube(2))
class Example:
    #  class variable (Common)
    common = 50
    def __init__(self, val):
        #  instance variable (Unique)
        self.local = val

A = Example(10)
B = Example(30)

print(A.common, A.local)
print(B.common, B.local)

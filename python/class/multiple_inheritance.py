class A:
    def __init__(self):
        self.a = 10

class B:
    def __init__(self):
        self.b = 20

# multiple inheritance
class C(A, B):
    def __init__(self):
        A.__init__(self)
        B.__init__(self)
        self.c = 30

obj = C()
print(obj.a, obj.b, obj.c)
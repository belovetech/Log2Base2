class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        

class Library(Student):
    pass


lib = Library("Bob", 25)

print(f"Name: {lib.name} \nAge: {lib.age}")
#  Student class
class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        # private variable
        self.__phone = "08109211864"
        
    def getPhone(self):
        return self.__phone

    def getDetails(self):
        print(f"Name: {self.name} \nAge: {self.age} \nFine: {self.fine}")

# Library Class inherit Student properties and methods
class Library(Student):
    def __init__(self, name, age, fine):
        Student.__init__(self, age, name)
        self.fine = fine



lib = Library("Bob", 25, 500)
lib.getDetails()
print(f"Phone Number: {lib.getPhone()}")
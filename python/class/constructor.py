class Person:
    def __init__(self, name, age, dob):
        self.name = name
        self.age = age
        self.dob = dob

    def getDetails(self):
        print(f"Name: {self.name} \nAge: {self.age} \nDob: {self.dob}")


obj = Person("Bob", 25, "20-11-1995")
obj.getDetails()



class Person:
    def setDetails(self, name, age, dob):
        self.name = name
        self.age = age
        self.dob = dob

    def getDetails(self):
        print(f"Name: {self.name} \nAge: {self.age} \nDob: {self.dob}")


p1 = Person()
p1.setDetails("Bob", 25, "20-11-1995")
p1.getDetails()



# create Data class
class Data:
    def setData(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

    def getData(self):
        print(f"x={self.x} \ny={self.y} \nz={self.z}")

# create an instance of object
obj = Data()
obj.setData(10, 20, 30)
obj.getData()

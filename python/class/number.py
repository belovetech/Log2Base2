class Numbers:
    def __init__(self):
        self.n = []

    def add_item(self, num):
        self.n.append(num)


odd = Numbers()
odd.add_item(1)
odd.add_item(3)
print(odd.n)

even = Numbers()
even.add_item(2)
even.add_item(4)
print(even.n)
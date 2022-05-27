def name():
    print("Beloved,", end=" ")
    

def decorator(fun):
    def greeting():
        print("Hello", end=" ")
        fun()
        print("How are you doing today?")
    return greeting
    

new = decorator(name)

new()

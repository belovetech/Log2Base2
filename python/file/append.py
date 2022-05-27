# append
f = open("new.txt", "a")
f.write("How are you doing today?\n")
f.close()

#  read
f = open("new.txt", "r")
print(f.read())
f.close()
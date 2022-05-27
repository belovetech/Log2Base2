#  write
f = open("new.txt", "w")
f.write("Hello world\n")
f.close()

#  read
f = open("new.txt", "r")
print(f.read())
f.close()
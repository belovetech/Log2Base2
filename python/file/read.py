f = open("file.txt", "r")

# print file object
# print(f.read(10))
# print(f.readline())
# print(f.read())

#  Read lines
# list = f.readlines()
# print(list)

#  print using for loop
for x in f:
    print(x, end=" ")
print()

f.close()
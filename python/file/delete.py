import os

if os.path.exists("code.txt"):
    os.remove("code.txt")
else:
    print("File Not Found")

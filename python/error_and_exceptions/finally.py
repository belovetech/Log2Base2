try:
    f = open("new.txt", "w")
    f.write("Hello Python")
except:
    print("Something Went Wrong!")
finally:
    f.close()
# open new.txt and copy.txt in read and write mode respectively
fr = open("new.txt", "r")
fw = open("copy.txt", "w")

# read from new.txt and write to copy.txt
for line in fr:
    fw.write(line)
 
#  close files  
fr.close()
fw.close()


# Read copy.txt
f = open("copy.txt", "r")
print(f.read())
f.close()



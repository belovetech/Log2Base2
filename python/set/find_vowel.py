a = {'a', 'e', 'x', 'y', 'i', 'f', 'k', 'c'}
#Write your code here
vowels = {'a', 'e', 'i', 'o', 'u'}
new_set = set()
# new_set.add('b')

for i in a:
    for v in vowels:
        if v == i:
            new_set.add(v)

print(new_set)

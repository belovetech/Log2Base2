# Write a program to get a string S from the user and 
# count the number of vowels present in the string.
# Finally, display the vowel count.

str = input("Enter a string: ")
vowels = {'a', 'e', 'i', 'o', 'u'}
count = 0

for ch in str:
    for v in vowels:
        if ch == v:
            count += 1


print(f'There are {count} vowels in the string "{str}"')
        

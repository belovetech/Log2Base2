greet =  "Hello World"

strlen = len(greet)
print(f'string length: {strlen}')

str_replace = greet.replace('H', 'Y')
print(f'string replace: {str_replace}')

str_upper = greet.upper()
str_lower = str_upper.lower()
print(f'string upper: {str_upper}')
print(f'string lower: {str_lower}')

str = "Python-Scripting-Language"
str_split = str.split('-')
print(f'string split: {str_split}')

greet =  "                    Hello World    "
str_strip = greet.strip()
print(f'Without string strip: {greet}')
print(f'With string strip: {str_strip}')


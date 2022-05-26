data = {'name': 'Benz', 'price': 250, 'color':'White'}

# modify data
data['price'] = 10000

# add new item
data['model'] = 2021

# remove item
# data.pop('price')
# del data('color')

# clear and delete
# data.clear()
# del data

# copy
copy = data.copy()
copy2 = dict(data)

print(data)
print(copy)
print(copy2)
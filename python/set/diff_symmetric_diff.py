a = {10, 20, 30}
b = {10, 20, 100}

res = a.difference(b)
print(f'a difference b: {res}')
res = b.difference(a)
print(f'b difference a: {res}')

res = a.symmetric_difference(b)
print(f'a asymmetric_difference b: {res}')

res = a.union(b)
print(f'a union b {res}')
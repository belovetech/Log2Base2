# Subset, SuperSet, Disjoint
a = {20, 60, 30 ,30, 60, 40}
b = {20, 30, 40}

res = a.issubset(b)
print(f'Subset: {res}')
res = b.issubset(a)
print(f'Subset: {res}')

res = a.issuperset(b)
print(f'Superset: {res}')
res = b.issuperset(a)
print(f'Superset: {res}')


a = {20, 60, 40}
b = {5, 14, 23}

res = a.isdisjoint(b)
print(f'Disjoint: {res}')

a = {20, 60, 40}
b = {5, 14, 23, 20}
res = b.isdisjoint(a)
print(f'Disjoint: {res}')
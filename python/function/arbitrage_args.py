def sum(*input):
    ans = 0
    for x in input:
        ans += x
    print(f'Sum : {ans}')
    

sum(4, 7, 9)
sum(20, 7, 9, 10)
sum(20, 7, 9, 50, 100)

# def display(*data):
#     for d in data:
#         print(d)
        
# list2 = [20, 7, 9, 10]
# display('Beloved', 'b', 6, 9)
# display(list2)
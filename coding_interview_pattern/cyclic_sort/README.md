# Cyclic Sort

Cyclic sort is a technique use to sort arrays containing a range of integer such e.g range(0, N), range(1, N).

### procedures

1. initialize i to equal to zero (0)
2. find index of the current integer (arr[i] -1). supposed arr[i] is 5 then it should be at index arr[i] - 1 => 5 - 1 = index 4
3. if arr[i] not equal to arr[index]
   - swap the two integers swap(arr[i], arr[index])
4. else
   - Increment i

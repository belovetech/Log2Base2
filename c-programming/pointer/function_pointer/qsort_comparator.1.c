#include <stdio.h>
#include <stdlib.h>

#define size 5

/*
void qsort (void* base, size_t num, size_t size,
            int (*comparator)(const void*,const void*));
            
* int comparator(const void* p1, const void* p2);
* Return value meaning
* <0 The element pointed by p1 goes before the element pointed by p2
* 0  The element pointed by p1 is equivalent to the element pointed by p2
* >0 The element pointed by p1 goes after the element pointed by p2
*/

typedef struct student
{
    int name[20];
    int age;
    int roll_number;
}s;

int comparator(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int arr[size] = {20, 56, 23, 67, 25}, i;

    qsort(arr, size, sizeof(int), comparator);

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return (0);
}
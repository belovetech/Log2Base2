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
    char name[20];
    int age;
    int roll_number;
}student;

int compAge(const void *a, const void *b)
{
    return (((student *)a)->age - ((student *)b)->age);
}

int main(void)
{
    student s[3] = {
            {"Doe", 25, 101},
            {"Joe", 22, 100},
            {"Bob", 19, 105},
    };

    qsort(s, 3, sizeof(student), compAge);

    for (int i = 0; i < 3; i++)
        printf("%d %s %d\n", s[i].roll_number, s[i].name, s[i].age);

    return (0);
}
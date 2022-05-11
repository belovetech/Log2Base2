#include<stdio.h>

/**
 * struct student - student details
 * @name: name of the student
 * @age: age of the student
 * @id: id of the student
 */
struct student
{
    char name[20];
    int age;
    int id;
};

/**
 * main - declares and initialize array of struct
 * 
 * Return: 0 always (success)
 */
 
int main(void)
{
    int i, n;
    // declare 3 array of structure
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n]; 
    
                  
    for (i = 0; i < n; i++)
    {
        printf("Enter Your Name: ");
        scanf("%s", s[i].name);
        printf("Enter Your Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Your id: ");
        scanf("%d", &s[i].id);
    }
       
    printf("\n\nStudents Details\n");
    for (i = 0; i < n; i++)
        printf("Name => %s Age => %d Student ID => %d\n", s[i].name, s[i].age, s[i].id);
    
    return (0);
}
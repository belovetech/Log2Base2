#include<stdio.h> 

/**
 * struct student - student information
 * @roll_number: roll number of the student
 * @name: name of the student
 * @age: age of the student
 */
struct student
{
    int roll_number;
    char name[10];
    int age;
};

/**
 * print_student_details - prints student information
 * @obj: array of student details
 * @size: number of the student
 */
void print_student_details(struct student obj[], int size)
{
    int i;
    
    for (i = 0; i < size; i++)
        printf("%d %s %d\n", obj[i].roll_number, obj[i].name, obj[i].age);
}

/**
 * main - reads and writes user details
 * 
 * Return: 0 always (success) 
 */

int main(void)
{
    int n, i;

    printf("Enter total number of the student: ");
    scanf("%d", &n);
    
    struct student s[n];
    
    for (i = 0; i < n; i++)
    {
        printf("Enter detail of the student (roll_number name age): ");
        scanf("%d %s %d", &s[i].roll_number, s[i].name, &s[i].age);
    }
        
    print_student_details(s, n);
    
    return 0; 
}
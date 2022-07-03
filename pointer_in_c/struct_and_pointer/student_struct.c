#include<stdio.h> 

/**
 * struct student - student description
 * @name: name of the student
 * @age: price of the student
 * @roll_number: weight of the student
 * @dob: dob of the student
 */ 
struct student
{
    char name[20];
    int age;
    int roll_number;
    char dob[10];
};

/**
 * main - prints student info using struct pointer
 *
 * Return: 0 always (success)
 */

int main(void)
{
    struct student s;
    struct student *ptr;
    
    ptr = &s;
   //Edit below this line
    printf("Enter student name age and roll number: ");
    scanf("%s %d %d %s", ptr->name, &ptr->age, &ptr->roll_number, ptr->dob);
   
    printf("%s %d %d %s\n", ptr->name, ptr->age, ptr->roll_number, ptr->dob);

    return 0; 
}
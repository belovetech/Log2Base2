#include<stdio.h>

/**
 * struct student - student information
 * @roll_number: roll number of the student
 * @name: name of the student
 * @age: age of the student
 * @total_mark: total mark of the student
 */
struct student
{
    int roll_number;
    char name[10];
    int age;
    int total_mark;
};

/**
 * main - prints roll number and name of the student with score >= 450 
 * 
 * Return: 0 always (success)
 */

int main(void)
{
   //Edit below this line
   int n, i;
   
   printf("Enter The total number of the students: ");
   scanf("%d", &n);

   struct student s[n];

   for (i = 0; i < n; i++)
   {
        printf("Enter your Roll number, Name, Age and total Mark: ");
        scanf("%d %s %d %d", &s[i].roll_number, s[i].name, &s[i].age, &s[i].total_mark);
   }


   for (i = 0; i < n; i++)
   {
       if (s[i].total_mark >= 450)
            printf("%d %s\n", s[i].roll_number, s[i].name);
   }

    return 0;
}
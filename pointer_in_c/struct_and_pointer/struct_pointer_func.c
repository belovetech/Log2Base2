#include <stdlib.h>
#include <stdio.h>
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

struct student *get_deatils();
void print_details(struct student *obj);

/**
 * main - prints student info using struct pointer
 *
 * Return: 0 always (success)
 */

int main(void)
{
    struct student *s;

    s = get_deatils();
    print_details(s);

    free(s);
    s = NULL;
    return 0;
}

/**
 * get_deatils - gets student's details from the student
 * 
 * Return: Pointer to the struct members
 */
struct student *get_deatils()
{
    size_t size = 20;
    struct student *ptr = malloc(sizeof(struct student));
    
    if (ptr != NULL)
    {
        printf("Enter students details\n");
        printf("Name: ");
        fgets(ptr->name, size, stdin);
        printf("Age: ");
        scanf("%d", &ptr->age);
        printf("Roll_No: ");
        scanf("%d", &ptr->roll_number);
        printf("DOB: ");
        scanf("%s", ptr->dob);
    }
    return(ptr);
}

/**
 * print_details - prints student's details
 * @obj: a pointer to the student details
 */
void print_details(struct student *obj)
{
    printf("\n\nStudents' Details\n");
    printf("Name: %s\n", obj->name);
    printf("Roll_no: %d\n", obj->roll_number);
    printf("DOB: %s\n", obj->dob);
    printf("Age: %d\n", obj->age);
}
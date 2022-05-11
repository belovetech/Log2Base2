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
    // declare 3 array of structure
    //struct student s[3]; 
    int i;
    // declare and initialize 3 array of structure
    struct student s[3] = {
                        {"John", 16, 234},
                        {"Godwin", 17, 123},
                        {"Godfrey", 15, 342},
                    };
                    
    for (i = 0; i < 3; i++)
        printf("Name => %s Age => %d Student ID => %d\n", s[i].name, s[i].age, s[i].id);
    
    return (0);
}

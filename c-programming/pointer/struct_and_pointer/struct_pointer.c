#include<stdio.h>

struct employee
{
    char name[20];
    int age;
    float weight;
};

/**
 * main - prints address of array of character and the value at the address
 *
 * Return: 0 always (success)
 */

int main(void)
{

  struct employee e = {"John", 25, 52.76};
  struct employee *ptr = &e;

  printf("ptr->name = %s\n", ptr->name);
  printf("ptr->age = %d\n", ptr->age);
  printf("ptr->weight = %.2f\n", ptr->weight);



    return 0;
}
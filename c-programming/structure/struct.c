#include <stdio.h>

/**
 * struct car - car description
 * @name: name of the car
 * @price: price of the car
 */
struct car
{
    char name[5];
    float price;
};

int main(void)
{
    struct car car1 = {"Benz", 1234.56};
    
    printf("Name of car1 %s\n", car1.name);
    printf("Price of car1 %f\n", car1.price);
    
    return (0);
}
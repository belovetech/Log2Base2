#include<stdio.h> 

#pragma pack(1);

/**
 * struct mobile - mobile details
 * @name: name of the mobile
 * @price: price of the mobile
 * @colour: colour of the mobile
 */
struct mobile
{
    char name[10];
    float price;
    char colour[20]; 
}; //__attribute__((packed));

int main(void)
{
    struct mobile mobile1;

   printf("Enter mobile name: ");
   scanf("%s", mobile1.name);
   printf("Enter mobile price: ");
   scanf("%f", &mobile1.price);
   printf("Enter mobile colour: ");
   scanf("%s", mobile1.colour);
   
   printf("Mobile name: %s\n", mobile1.name);
   printf("Mobile price: %f\n", mobile1.price);
   printf("Mobile colour: %s\n", mobile1.colour);
    
    printf("%ld\n", sizeof(struct mobile));
    return 0; 
}
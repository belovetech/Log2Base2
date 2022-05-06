#include<stdio.h> 

int main()
{
     int a, b, choice;
   
     printf("Enter two digits: \n");
     scanf("%d %d", &a, &b);
   
     printf("Enter your choice\n");
     printf("1 for addition 2 for subtraction, 3 for multplication and for 4 for division.\n");
     scanf("%d", &choice);
   
     switch(choice)
     {
          case 1:
               printf("%d\n", a + b);
               break;
          case 2:
               printf("%d\n", a - b);
               break;
          case 3:
               printf("%d\n", a * b);
               break;
          case 4:
               printf("%d\n", a / b);
               break;
          default:
               printf("Invalid\n");
     }
     return 0; 
}
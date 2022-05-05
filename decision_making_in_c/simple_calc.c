#include<stdio.h> 

int main()
{
     int a, b, choice;
   
     printf("Enter two digits: \n");
     scanf("%d %d", &a, &b);
   
     printf("Enter choice digits\n");
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
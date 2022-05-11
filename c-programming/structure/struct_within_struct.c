#include<stdio.h>

/**
 * struct one - struct within struct 
 */
struct one
{
     int i;
     struct two
     {
          int j;
          struct three
          {
                int k;
          }var3;
      }var2;
}var1;

int main()
{
    var1.i = 5;
    var1.var2.j = 100;
    var1.var2.var3.k = 15;

    printf("%d %d %d\n", var1.i,  var1.var2.j, var1.var2.var3.k);
    return 0;
}

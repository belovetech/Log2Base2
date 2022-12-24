/*
**
** QWASAR.IO -- my_capitalize
**
** @param {char*} param_1
**
** @return {char*}
**
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* my_capitalize(char* str)
{
  	int i;
  	char *res = malloc(sizeof(char) * strlen(str) + 1);
  
	for (i = 0; str[i] != '\0'; i++)
    {	
        if (i == 0) {
            if (str[i] >= 97 && str[i] <= 122)
      	        res[i] = str[i] - 32;
            else
      	        res[i] = str[i];
        }
        
      	if (str[i] >= 65 && str[i] <= 97)
            res[i] = str[i] + 32;
        else
      	    res[i] = str[i];
    }
  	
  
  	res[i] = '\0';
  
  	return res;
}

int main(void)
{
    char *str = "AbcE Fgef1";
    
    char *res = my_capitalize(str);
    
    printf("%s\n", res);    
    return (0);
}
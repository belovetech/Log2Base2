#include<stdio.h>
/**
 * main - Concatenates two strings
 * 
 * Return: 0 always 
 */
int main(void)
{
    char str1[10], str2[10], str3[20];
    
    printf("Enter two strings: ");
    scanf("%s%s", str1, str2);
    
    int i, j;
    
    for (i = 0; str1[i] != '\0'; i++)
        str3[i] = str1[i];
        
    for (j = 0; str2[j] != '\0'; j++)
        str3[i+j] = str2[j];
        
    str3[i+j] = '\0';
    
    printf("%s", str3);
    
    return 0;
}
    
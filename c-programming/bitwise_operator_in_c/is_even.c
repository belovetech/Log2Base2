#include <stdio.h>
#include <stdbool.h>

/**
 * find_even - checks if an integer is even or odd
 * @n: an integer to check
 * Return: True if n is Even otherwise False
 */
 
// using bitwise AND
bool is_even(int n)
{
    int res;
    
      /** if res == 0 (Even) 
      * Else res == 1 (Odd) */
    res = n & 1; 

    return (!res);
}
// using bitwise OR
bool is_even2(int n)
{
    int res;
    
      /** if res == n+1 (Even) 
      * Else res == n (Odd) */
    res = n | 1; 
    if (res > n)
        return (true);
    else
        return (false);
}

// using bitwise XOR
bool is_even3(int n)
{
    int res;
    
    /** if res == n+1 (Even) 
      * Else res == n-1 (Odd) */
    res = n ^ 1; 
    
    if (res == n + 1)
        return (true);
    else
        return (false);
}

int main(void)
{
    int n;
    // bool res;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    is_even2(n)? printf("Even\n") : printf("Odd\n");
    return (0);
}

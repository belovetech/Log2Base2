#include <stdio.h>
#include <math.h>

/**
 * struct point - point cordinates
 * @x: horizontal line
 * @y: vertical line
 */
struct point
{
    int x;
    int y;
};

/**
 * struct line - line of point
 * @p1: line point 1
 * @p2: line point 2
 */
struct line
{
    struct point p1;
    struct point p2;
};

/**
 * main - calculate distance of two different cordinates 
 * 
 * Return: 0 always (success) 
 */
int main(void)
{
    float distance;
    struct line l;
    
    printf("Enter p1(x and y): ");
    scanf("%d %d", &l.p1.x, &l.p1.y);
    
    printf("Enter p2(x and y): ");
    scanf("%d %d", &l.p2.x, &l.p2.y);

    printf("\n\nPoint p1 (%d, %d)\n", l.p1.x, l.p1.y);
    printf("Point p2 (%d, %d)\n", l.p2.x, l.p2.y);
    
    distance = sqrt(pow((l.p2.x - l.p1.x), 2) + pow((l.p2.y - l.p1.y), 2));
    printf("The distance is %.2f\n", distance);
    
    return (0);
}
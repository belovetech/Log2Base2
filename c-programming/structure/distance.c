#include <stdio.h>
#include <math.h>

/**
 * struct point - point coordinates
 * @x: x coordinates
 * @y: y coordinates
 */
struct point
{
    int x;
    int y;
};

/**
 * struct line - line coordinate
 * @p1: coordinate 1
 * @p2: coordinates 2
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
 *
 *calculate distance
  *    /-----------------------
  * __/(x2-x1)^2 + (y2-y1)^2
  */
int main(void)
{
    float distance;
    struct line l;

    //get coordinate 1
    printf("Enter p1(x and y): ");
    scanf("%d %d", &l.p1.x, &l.p1.y);

    //get coordinate 2
    printf("Enter p2(x and y): ");
    scanf("%d %d", &l.p2.x, &l.p2.y);

    printf("\n\nPoint p1 (%d, %d)\n", l.p1.x, l.p1.y);
    printf("Point p2 (%d, %d)\n", l.p2.x, l.p2.y);
    
    distance = sqrt(pow((l.p2.x - l.p1.x), 2) + pow((l.p2.y - l.p1.y), 2));
    printf("The distance is %.2f\n", distance);
    
    return (0);
}
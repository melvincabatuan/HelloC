/** Structure to organize your data
 * 
 * Structure is a way for you to organize your data.
 * We oftentimes try to do it on our everday activities even knowing it.
 * To give an example let's create a program that 
 * stores a point and calculate the distance between two points
 *
 * In here, we show we can make it more organized by using Structures.
 * 
 * Additionally, we show how we can keep struct definition simpler and more natural
 * by using typedef
 * 
 */
#include <stdio.h>
#include <math.h>

//What you are saying is that each Point would need to have
// its X and Y.
//Notice: How we added the typedef and move the name of the struct at the bottom.
typedef struct
{
    double X;
    double Y;
} Point;

//Notice we don't need to write struct before Point anymore
double calculateDistance(Point point1, Point point2)
{
    return sqrt((point1.X - point2.X) * (point1.X - point2.X) + (point1.Y - point2.Y) * (point1.Y - point2.Y));
}

int main(void)
{
    //Notice: It's more natural. It's as if you are declaring a new variable of data type Point.
    Point point1;
    Point point2;

    printf("On point 1, Enter X: ");
    scanf("%lf", &point1.X); //The dot operator is used to access its X
    printf("On point 1, Enter Y: ");
    scanf("%lf", &point1.Y); //The dot operator is also used to access Y.

    printf("On point 2, Enter X: ");
    scanf("%lf", &point2.X);
    printf("On point 2, Enter Y: ");
    scanf("%lf", &point2.Y);

    double total = calculateDistance(point1, point2);
    printf("The total distance between two point is %0.3f\n", total);

    return 0;
}
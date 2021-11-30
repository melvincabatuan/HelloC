/** Structure to organize your data
 * 
 * Structure is a way for you to organize your data.
 * We oftentimes try to do it on our everday activities even knowing it.
 * To give an example let's create a program that 
 * stores a point and calculate the distance between two points
 *
 * in this example, although it works, we show it's kinda clunky to do this in our current mindset.
 * It's due to the fact that we know that a point cannot be represented by a single variable.
 * This is shown in this example.
 */
#include <stdio.h>
#include <math.h>

double calculateDistance(double X1, double Y1, double X2, double Y2)
{
    return sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
}

int main(void)
{
    //Typical way to do it.
    double point1_X, point1_Y;
    double point2_X, point2_Y;

    printf("On point 1, Enter X: ");
    scanf("%lf", &point1_X);
    printf("On point 1, Enter Y: ");
    scanf("%lf", &point1_Y);

    printf("On point 2, Enter X: ");
    scanf("%lf", &point2_X);
    printf("On point 2, Enter Y: ");
    scanf("%lf", &point2_Y);

    double total = calculateDistance(point1_X, point1_Y, point2_X, point2_Y);
    printf("The total distance between two point is %0.3f\n", total);

    return 0;
}
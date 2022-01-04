#include <stdio.h>

typedef struct {
   int x, y; 
} Point;

void doubleThePoint(Point *p){
    p -> x *= 2;
    p -> y *= 2;
}

int main(){
    Point center = {1, 2};
    printf("Point: (%d, %d)\n", center.x, center.y); // Point: (1, 2)
    doubleThePoint(&center);
    printf("Double point: (%d, %d)\n", center.x, center.y); // Point: (2, 4)
    return 0;
}

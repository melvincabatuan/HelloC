#include "location.h" 

Location::Location(int xVal, int yVal) {
   x = xVal;
   y = yVal;
}

int Location::getX() {
   return x;
}

int Location::getY() {
   return y;
}

void Location::translate(int dx, int dy) {
   x += dx;
   y += dy;
}

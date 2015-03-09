#include "location.h"
#include <iostream>


using namespace std;

int main(){
    /// Stack allocation
    Location loc(3, 4);
    loc.translate(9, 8);
    cout << loc.getX() <<", "<< loc.getY() << endl;

    /// Heap allocation 
    Location *pLoc = new Location(0, 0);
    pLoc->translate(100, 200); 
    cout << loc.getX() <<", "<< loc.getY() << endl;
    return 0;
}

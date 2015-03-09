#include <string>
#include "simpio.h"
#include "simpio.cpp"

int main(){
    int x = getInteger("Enter an integer: ");
    std::cout << "x = " << x << std::endl;
    std::string answer = getLine("Enter an string: ");
    std::cout << "answer = " << answer << std::endl;
}

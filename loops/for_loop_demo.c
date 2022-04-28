/*/*
This program demonstrates for-loop by printing even numbers.
Written by: MKC
Date written:
Last modified:
*/
#include <stdio.h>

int main(){
    for (int i = 0; i <= 100; i += 1){
        if (2 * i == 20)
            continue;
        printf("%d \n", 2*i);

    }
    return 0;
}
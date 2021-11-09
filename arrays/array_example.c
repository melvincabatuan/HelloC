#include <stdio.h>

/*
  NOTE: THIS is just an example.
*/

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int offset = 3;
    // GOAL: {4,5,6,7,8,9,10, 1,2,3}
    for (int i = offset; i < 10 + offset; i++){
        printf("%d ", arr[i%10]);
    }
    return 0;
}
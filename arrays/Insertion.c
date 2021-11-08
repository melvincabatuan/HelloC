/* Insert x in an array at correct order */

#include <stdio.h>

void insert(int a[], int n, int x){
    int i = n;
    while ((i > 0) && (a[i-1] > x)){
         a[i] = a[i-1];
         i--;
    }
    a[i] = x; 
}


void display(int a[], int n){
    int i = 0;
    printf("[ ");
    while (i < n){
         printf("%d ", a[i]);
         i++;
    }
    printf("]\n"); 
}


int main(){
  int myArray[10];
  myArray[0] = 1;
  myArray[1] = 2;
  myArray[2] = 4;
  display(myArray, 3);
  insert(myArray, 3, 3);
  display(myArray, 4);
  return 0;
}

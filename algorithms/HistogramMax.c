/*
 * Solves for the maximum frequency in a given data
 */

#include <stdio.h>


int main(){
   
  int data[] = {6, 3, 6, 4, 6};
  int histogram[] = {0, 0, 0, 0, 0, 0};

  for (int i = 0; i < 5; i++){
     for (int j = 1; j <= 6; j++)
         if (data[i] == j){
              histogram[j-1]++;
          }
  }

  for (int i = 0; i < 6; i++){
      printf("histogram[%d] = %d\n", i+1, histogram[i] );
   }

    int maximum = histogram[0];

		for (int i = 1; i < 5; i++) {
                     if (histogram[i] > maximum){
		         maximum = histogram[i];
                     }
		}
    printf("maximum = %d\n", maximum);

  return 0;
}

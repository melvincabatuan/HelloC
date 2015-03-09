#include <stdio.h>

int max(int a, int b){
              if (a > b)
                 return a;
              else 
                 return b;
        }

int main(){
    int temp = 0, cont = 0;
    int histogram[] = {3,0,1,1,0,0}; 

		for (int i = 0; i < 6; i++) {
                     if (histogram[i] > 0){
		         temp++;
                         printf("temp = %d \n", temp);
                         cont = max(cont,temp);
                         printf("cont = %d \n", cont);
                     }
                     else
                       temp = 0;
		}
      printf("Continuity = %d\n", cont);
      return 0;
}

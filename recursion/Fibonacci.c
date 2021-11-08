/* Prints Fibonacci numbers */

#include <stdio.h>

int Fibonacci(int n){
   if (n == 0 || n ==1)
      return n;
   else 
      return (Fibonacci(n-1) + Fibonacci(n-2)); 
}

int main(){
    
   int i = 0;
   for(i = 0; i <= 40; i++){
       printf("Fibonacci(%d) = %d\n", i, Fibonacci(i));
    }

   return 0;
}

  #include <stdio.h> 
  #include <stdlib.h>

   int main() { 
   /* Declare a 2 x 5 multidimensional array */ 
   int x[2][5] = { {1, 2, 3, 4, 5}, 
	           {2, 4, 6, 8, 10} };
    int row, column; 
    for (row=0; row<2; row++) { 
         for (column=0; column<5; column++)   
             printf("%d\t", x[row][column]); 
             putchar('\n'); 
     }//end outer for 
      
     system("pause");
     return 0;
}//end main

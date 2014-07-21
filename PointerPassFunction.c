/* 
$ gcc PointerPassFunction.c -o PointerPassFunction
$ ./PointerPassFunction 
Mary Magdalene came and told the disciples that she had seen the LORD, 
 and that he had spoken these things unto her.
Mary Magdalene came and told the disciples that she had seen the LORD, 
 and that he had spoken these things unto her.
The sum returned by DataAdd(): 15
The sum returned by DataAdd(): 15
*/

#include <stdlib.h>
#include <stdio.h>


void ChPrint(char *ch)
{
  printf("%s\n", ch);
}


int DataAdd(int *list, int max)
 {
 int i;
 int sum = 0;
 
 for (i=0; i<max; i++)
     sum += list[i];
 return sum;
}



void main()
 {
 char str[] = "Mary Magdalene came and told the disciples that she had seen the LORD, \n and that he had spoken these things unto her.";
 char *ptr_str = str; // assign address to pointer

 int list[5] = {1, 2, 3, 4, 5};
 int *ptr_int = list; // assign address to pointer
 
 ChPrint(ptr_str); // pass the pointer to str

 ChPrint(str); // pass the reference to str base address
 
 printf("The sum returned by DataAdd(): %d\n", DataAdd(ptr_int, 5)); // using the pointer
 printf("The sum returned by DataAdd(): %d\n", DataAdd(list, 5)); // using the base address of list
 exit(0);
 }

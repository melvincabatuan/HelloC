/* 
$ gcc ArrayPassFunction.c -o ArrayPassFunction
$ ./ArrayPassFunction 
Enter three integers separated by spaces:
23 10 11
The sum of the three integers is: 44
*/

#include <stdlib.h>
#include <stdio.h>

/*Note: You can also specify the size of an array that is passed to a function.
  Ex. int AddThree(int list[3])
 However, for multidimensional arrays, the format of an unsized array should 
 always be used in the declaration.
*/
int AddThree(int list[])
{
  int i;
  int result = 0;
 
  for (i=0; i<3; i++)
    result += list[i];
  return result;
}



void main()
 {
  int sum, list[3];
 
  printf("Enter three integers separated by spaces:\n");
  scanf("%d%d%d", &list[0], &list[1], &list[2]);

  sum = AddThree(list);

 printf("The sum of the three integers is: %d\n", sum);
 exit(0);
 }

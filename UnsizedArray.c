/* 
$ gcc UnsizedArray.c -o UnsizedArray
$ ./UnsizedArray 
Knowledge is power!
Knowledge is power!
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 char array_ch[] = {'K','n', 'o','w','l','e','d','g','e',' ','i', 's',' ','p','o','w','e','r','!','\0'};
 int i = 0;
 while(array_ch[i] != '\0'){
   printf("%c",array_ch[i]);
   i++;
 }
 printf("\n");
 printf("%s\n", array_ch);
 exit(0);
 }

/* 
$ gcc UnsizedArray.c -o UnsizedArray
$ ./UnsizedArray 
Knowledge is power!
Knowledge is power!
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 void main()
 {
 char str1[] = {'K','n', 'o','w','l','e','d','g','e',' ','i', 's',' ','p','o','w','e','r','!','\0'};
 char str2[] = {'A',' ','s','t','r','i','n','g',' ','c','o','n','s','t','a','n','t','\0'};
 char str3[] = "Another string constant";
 char str4[] = "Another string constant";
 char *ptr_str = "Assign a string to a pointer.";
 
 printf("The length of str1 = \"%s\" is: %d bytes\n", str1, strlen(str1));
 printf("The length of str2 = \"%s\" is: %d bytes\n", str2, strlen(str2));
 printf("The length of str3 = \"%s\" is: %d bytes\n", str3, strlen(str3));
 printf("The length of str4 = \"%s\" is: %d bytes\n", str4, strlen(str4));
 printf("The length of the string assigned to ptr_str,\n \"%s\" is: %d bytes\n", ptr_str, strlen(ptr_str)); 
 // Segmentation fault if *ptr_str is used
 printf(" Is str1 == str2? %d \n", str1 == str2); 
 printf(" Is str3 == str4? %d \n", str3 == str4); 
 printf(" Is str3 == \"Another string constant\"? %d \n", str3 == "Another string constant"); 
 exit(0);
 }

 /*Using gets() and puts() */

 #include <stdio.h>
 #include<stdlib.h>

 main()
 {

 char str[81];
 int i, delt = 'a' - 'A';



     printf("Enter a string less than or equal to 80 characters:\n");
     gets( str );
    
     i = 0;
     while (str[i]){
           if ((str[i] >= 'a') && (str[i] <= 'z'))
           str[i] -= delt; /* convert to upper case */
                  ++i;
 }

  printf("The entered string is (in uppercase):\n");
  puts( str );
  system("pause");
  return 0;
 }

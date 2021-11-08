#include <stdio.h>
#include<stdlib.h>

main( )
{

      char message[81],c; 	/* enough storage for a complete line */
      int i;
      printf("Enter a sentence:\n");

      i = 0;
      while( i < 81 && (c = getchar( )) != '\n')
      {
             message[i] = c; 	/* store the character entered */
             ++i;
      }

      message[i] = '\0'; 	/* terminate the string */
      printf("The sentence just entered is:\n");
      puts(message);    
      system("pause");
      return 0;
}

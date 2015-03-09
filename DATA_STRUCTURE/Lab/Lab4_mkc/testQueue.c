// Ordered List Implementation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "queue.h"

int main()
{
	char c;       // command	
	int position; // list position 
	int quit = 0; // sentinel	
	
        char newitem;
        queue myQ;
        createQueue(&myQ);

        printf("\n-");

	while (quit == 0)
	{

         if ( (c = getchar()) != '\n') {            
          

	switch (c)
	{
	case 'e':
                if(isEmpty(&myQ))
                    printf("true");
                else
                    printf("false");
	        break;

	case 'l':
		printf("\n\nLength = %d\n", length(&myQ));
	        break;

	case '+':
                if(myQ.size == MAX)
		        printf("\n\nQueue is Full\n");		
		else
		{
		       insert(&myQ, newitem);
                       myQ.size++;
		}
	        break;

	case '-':
		if (myQ.size == 0)
         		printf("\n\nQueue is Empty!\n");		
		else
		{
                        removeQ( &myQ );
		}
	        break;

	case 's':
         	//display( &myQ );
	        break;

	case 'q':
		quit = 1;
	        break;

	default:
	     printf("\n\nYou have entered an incorrect Option!\n");
             break;
	} // END_SWITCH 
        printf("\n-");
       }
     } // END_WHILE
     return 0;
}// END_MAIN

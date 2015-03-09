// Ordered List Implementation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "myList.h"

int main()
{
	char c;       // command	
	int l;        // list length
	int position; // list position 
	int quit = 0; // sentinel	
	
        Type newitem;
        orderedList list;
        list.size = -1;

        printf("\n-");

	while (quit == 0)
	{

         if ( (c = getchar()) != '\n') {            
          

	switch (c)
	{
	case 'e':
		createorderedList(&list);
		printf("\n\nOL Empty\n");
	        break;

	case 'l':
		l = length(&list);
		if(length < 0)
			printf("\n\nCreate an empty ordered list first!\n");
		else
			printf("\n\nLength = %d\n", l);
	        break;

	case 'i':
		if(list.size < 0)
			printf("\n\nCreate an empty ordered list first!\n");
		else if(list.size == MAX_ITEMS)
		        printf("\n\nList is Full\n");		
		else
		{
		       printf(" ");
		       scanf("%d %s", &position, newitem.y);
		       insert(&list, position, newitem);
		}
	        break;

	case 'd':
		if (list.size == 0)
         		printf("\n\nList Empty!\n");
		else if (list.size < 0)
			printf("\n\nCreate an empty ordered list first!\n");
		else
		{
		        printf(" ");
		        scanf("%d", &position);
		        if (position > list.size)
			     printf("\n\nThere's no item in that position!\n");
			else
		            listDelete(&list, position);
		}
	        break;

	case 's':
         	display(&list);
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

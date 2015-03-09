// Ordered List Implementation

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#include "list.c"

int main()
{
	char c;
	orderedlist list;
	int length;
	int position;
	int quit=0;
	itemtype newitem;

	list.size=-1;
	while (quit==0)
	{
	printf("\n-");
	c=getche();
	switch (c)
	{
	case 'e':
	{
		createorderedlist(&list);
		printf("\n\nOL Empty\n");
	}
	break;
	case 'l':
	{
		length=orderedlistlength(&list);
		if(length<0)
			printf("\n\nCreate an empty ordered list first!\n");
		else
			printf("\n\nLength=%d\n", length);
	}
	break;
	case 'i':
	{
		if(list.size<0)
		{
			printf("\n\nCreate an empty ordered list first!\n");
			
		}
		else if(list.size==MAX)
		{
		printf("\n\nList is Full\n");
		
		}
		else
		{
		printf(" ");
		scanf("%d %s", &position, newitem.y);
		orderedlistinsert(&list, position, newitem);
		}
	}
	break;
	case 'd':
	{
		if (list.size==0)
		{
		printf("\n\nList Empty!\n");
		
		}
		else if (list.size<0)
		{
			printf("\n\nCreate an empty ordered list first!\n");
			
		}
		else
		{
		printf(" ");
		scanf("%d", &position);
		if (strcmp(z, list.items[position-1].y)==0)
			printf("\n\nThere's no item in that position!\n");
			else
		orderedlistdelete(&list, position);
		}
	}
	break;
	case 's':
	{
		orderedlistdisplay(&list);
		
	}
	break;
	case 'q':
	{
		quit=1;
		
	}
	break;
	default:
		{
			printf("\n\nYou have entered an incorrect Option!\n");
			
		}
	break;
	}
	}
	return 0;
}


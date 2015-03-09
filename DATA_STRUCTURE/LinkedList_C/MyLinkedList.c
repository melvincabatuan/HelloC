/*****************************************************/
 
/*                 Linked List Demo                  */
 
/*****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char T[20];   // Item element type



/*=============================*/
/*       Linked List ADT       */
/*=============================*/
typedef struct node *node_ptr;

struct node{
    T item;
    node_ptr next;
};

typedef node_ptr LIST;
typedef node_ptr position;
/*=============================*/




/*=============================*/
/*  Linked List Implementation */
/*=============================*/
/*******************************/
/*          OPERATIONS         */
/*******************************/

int isEmpty( LIST L ){
// postcondition: Determine if a list is empty
   return (L->next == NULL);
}


position find( LIST L, T x ){
// postcondition: Return element x is in the LIST (if it exists)
   position p = L->next;

   while ((p != NULL) && (p->item != x))
       p = p->next; 

   return p;
}

position previous( LIST L, T x ){
// postcondition: Return the previous item of element x
   position p = L;

   while ( (p->next != NULL) && (p->next->item != x ))
       p = p->next;
 
   return p;
}


void delete( LIST L, T x ){
// postcondition: Delete element x
   position p, tmp;
   p = previous( L, x);

   if( p->next != NULL ){
        tmp = p->next;
        p->next = tmp -> next;
        free( tmp );
   }
}



void insert( LIST L, T x, position p ){
// postcondition: Insert an item in position p
   position tmp;

   tmp = (position) malloc( sizeof(struct node));

   if( tmp == NULL )
      fatal_error("Out of space");
   else {
       tmp->item = &x;
       tmp->next = p->next;
       p->next = tmp;
   }
}


void display( LIST L ){
   position p;

   p = L->next;

   while( p != NULL ){
       printf("\n %c \n", p->item);
       p = p->next;
   }
}


void deleteAll( LIST L ){
   position p, tmp;

   p = L->next;
   L->next = NULL;

   while( p != NULL ){
       tmp = p->next;
       free(p);
       p = tmp;
   }
}





/*=============================*/
/*      Linked List Test 
/*=============================*/
int main(void){
	
        /// Create list 
        LIST L;

        /// Initialize list
        L->next == NULL;
        int length = 0; // list length        

        /// Interface
        char c;         // command
        int quit = 0;   // sentinel
        printf("\n-");

	while (quit == 0)
	{

         if ( (c = getchar()) != '\n') {              

	 switch (c)
	 {
	 case 'e':		
                if(isEmpty(L))
		   printf("\n\nList Empty\n");
                else
                   printf("\n\nList Not Empty\n");
	        break;

	 case 'l':
		printf("\n\nLength = %d\n", length);
	        break;

	 case 'i':
                T newitem;
                position index;
 	        printf(" ");
		scanf("%d %s", &index, newitem);
		insert(&L, index, newitem);
	        break;

	case 'd':
                T item;
		if (isEmpty(&L))
         		printf("\n\nList Empty!\n");
		else
		{
		        printf(" ");                        
		        scanf("%c", &item);
 	                delete(&L, item);
		}
	        break;

	case 's':
         	display(&L);
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
        deleteAll(&L);
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

/*******************************/
/*                             */   
/*   Binary Search Tree Demo   */ 
/*                             */
/*******************************/


/*=============================*/
/*   Binary Search Tree ADT    */
/*=============================*/

typedef struct node *tree_ptr;

struct node{
    E item;
    tree_ptr pLeft;
    tree_ptr pRight;
};

/// BST - Binary Search Tree
typedef tree_ptr BST; 

/*=============================*/




/*=============================*/
/* Binary Search Implementation*/  
/*=============================*/
/*******************************/
/*          OPERATIONS         */
/*******************************/

/* 
 Helper function that allocates a new node 
 with the given data and NULL left and right 
 pointers. 
*/
BST makeTree( E x ){
   return NULL;
}

BST makeNull( void ){
   return NULL;
}

E info(tree_ptr p){
  if ( TREE == NULL ) 
       return NULL; 
  else 
       return p->item; 
}

BST left(BST TREE){
  if ( TREE == NULL ) 
       return NULL;
  else
       return TREE->pLeft; 
}

BST right(BST TREE){
  if ( TREE == NULL ) 
       return NULL;
  else
       return TREE->pRight; 
}

/* 
 Given a binary tree, return the node 
 with the target data if found. Recurs 
 down the tree, chooses the left or right 
 branch by comparing the target to each node. 
*/ 
BST find( BST TREE, E x ){
   // 1. Base case == empty tree 
   // in that case, the target is not found so return false
    if ( TREE == NULL ) 
       return NULL;

    // 2.a. Recur to the left subtree;
    if ( x < TREE->item )
       return ( find(TREE->pLeft, x) );

    // 2.b. Or recur to the right subtree  
    else if ( x > TREE->item ) 
       return ( find(TREE->pRight, x) );

    // 3. Handle when x is the root
    else 
       return TREE; 
}

/// Recursive min()
BST min( BST TREE ){

    if ( TREE == NULL ) 
       return NULL;
    else if (TREE->pLeft == NULL)
       return TREE;
    else
       return (min(TREE->pLeft));    
}

/// Non-recursive max()
BST max( BST TREE ){

    if (TREE != NULL )
       while( TREE->pRight != NULL)
            T = T->pRight;
    return TREE;
}




/*=============================*/
/*      Linked List Test 
/*=============================*/
int main(void){

        char c;       // command	
	int l;        // list length
	int position; // list position 
	int quit = 0; // sentinel	
	
        // 
        T newitem;
        LIST L;

        printf("\n-");

	while (quit == 0)
	{

         if ( (c = getchar()) != '\n') {            
          

	switch (c)
	{
	case 'e':		
                if(isEmpty(&L))
		   printf("\n\nList Empty\n");
                else
                   printf("\n\nList Not Empty\n");
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
   
	return EXIT_SUCCESS;
}

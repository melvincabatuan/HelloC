#include <stdio.h>
#include <stdlib.h>

/*******************************/
/*                             */   
/*   Binary Search Tree Demo   */ 
/*                             */
/*******************************/

typedef int E; // integer Element


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
   tree_ptr temp = (tree_ptr) malloc(sizeof(struct node));
   //tree_ptr temp = new(struct node); 
   temp->item = x;
   temp->pLeft = temp->pRight = NULL;  
   return (temp);
}


BST insert(BST TREE, E x) {  

  // 1. Create a new tree
  if(TREE == NULL) {  
     return makeTree(x);
  }

  //  Either recursively insert to left if smaller than root
  if(x < TREE->item) {
      TREE -> pLeft = insert( TREE -> pLeft, x);
   } 

   // Or recursively insert to right if larger than root
   else if(x > TREE->item) {
      TREE -> pRight = insert( TREE -> pRight, x);
   }
   else {
      // Do nothing if equal
   }
   return TREE;
}


/* 
 Given a binary tree, return the left subtree
*/
BST left(BST TREE){
  if ( TREE == NULL ) 
       return NULL;
  else
       return(TREE->pLeft); 
}


/* 
 Given a binary tree, return the right subtree
*/
BST right(BST TREE){
  if ( TREE == NULL ) 
       return NULL;
  else
       return(TREE->pRight); 
}

/* 
 Given a binary tree, return the node 
 with the target data if found. Recurs 
 down the tree, chooses the left or right 
 branch by comparing the target to each node. 
*/ 
BST find( BST TREE, E x ){
   // 1. Base case == empty tree 
   // EXIT if there is NO tree
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
       return(TREE); 
}


/* 
 Given a binary tree, return the minimum node
*/
BST findMin( BST TREE ){

    if ( TREE == NULL ) 
       return NULL;
    else if (TREE->pLeft == NULL)
       return TREE;
    else
       return (findMin(TREE->pLeft));    
}


/* 
 Given a binary tree, return the maximum node
*/
BST findMax( BST TREE ){
    if (TREE != NULL )
       while( TREE->pRight != NULL)
            TREE = TREE->pRight;
    return(TREE);
}



/* 
 Given a binary tree, removes the target node. 
*/ 
BST removeNode( BST TREE, E x ){     

     tree_ptr temp;
 
   // 1. Base case == empty tree 
   // EXIT if there is NO tree
    if ( TREE == NULL ) 
       printf("ERROR: Element not found.");
    
    else if (x < TREE->item) // Go left
       TREE->pLeft = removeNode (TREE->pLeft, x); 

    else if (x > TREE->item) // Go right 
       TREE->pRight = removeNode (TREE->pRight, x);
 
    else if(TREE->pLeft && TREE->pRight) 
    {
          temp = findMin(TREE->pRight);
          TREE->item = temp->item;
          TREE->pRight = removeNode(TREE->pRight, TREE->item);    
    }
  
    else 
    {
          temp = TREE;
          TREE = (left(TREE) != NULL) ? left(TREE) : right(TREE); 
          free(temp);
          return TREE;
    } 
    return TREE;
}


/* 
 Compute the number of nodes in a tree. 
*/ 
int size(BST TREE) { 
  if (TREE == NULL)  
      return(0);  
  else   
      return(size(TREE->pLeft) + 1 + size(TREE->pRight)); 
 }


/* 
 Compute the "maxDepth" of a tree -- the number of nodes along 
 the longest path from the root node down to the farthest leaf node. 
*/ 
int maxDepth(BST TREE) { 
  if (TREE == NULL)   
       return(0); 
  else { 
    // 1. Compute the depth of each subtree 
    int leftDepth = maxDepth(TREE -> pLeft); 
    int rightDepth = maxDepth(TREE -> pRight);
    // 2. Argmax(leftDepth, rightDepth) 
    if (leftDepth > rightDepth) return(leftDepth + 1); 
    else return(rightDepth + 1); 
  } 
}



/* 
 Given a binary search tree, print out 
 its data elements in increasing sorted order. 
 (Inorder Traversal)
*/ 
void printTree(BST TREE) { 
  if (TREE == NULL) return;

  // 1. Recur on left subtree
  printTree(TREE->pLeft); 

  // 2. Deal with the node data
  printf("%d ", TREE->item);

  // 3. Recur on right subtree
  printTree(TREE->pRight); 
}


/* 
 Given a binary tree, print its 
 nodes according to the "bottom-up" 
 postorder traversal. 
*/ 
void printPostorder(BST TREE) { 
  if (TREE == NULL) return;

  // 1. Recur on left subtree 
  printPostorder(TREE->pLeft); 

  // 2. Recur on right subtree 
  printTree(TREE->pRight);

  // 3. Deal with the node data 
  printf("%d ", TREE->item); 

}    


void printPreorder(BST TREE) {
   if (TREE == NULL) return;

   // 1. Deal with the node data
   printf("%d ",TREE->item);

   // 2. Recur on left subtree
   printPreorder(TREE->pLeft);

   // 3. Recur on right subtree 
   printPreorder(TREE->pRight);

}


void printInorder(BST TREE) {
   if (TREE == NULL) return;

   // 1. Recur on left subtree
   printInorder(TREE->pLeft);

   // 2. Deal with the node data 
   printf("%d ",TREE->item);

   // 3. Recur on right subtree 
   printInorder(TREE->pRight);
}



/* 
 Delete a binary tree
*/
void deleteTree(BST TREE) {
  if (TREE == NULL) return;

    // 1. Recur on left subtree
    deleteTree((BST) TREE->pLeft);

    // 2. Recur on right subtree 
    deleteTree((BST) TREE->pRight);

    // 3. Dellocate memory
    free(TREE);
}



/*
Usage:
*/
void usage(){
    printf("\n\t /*=============================*/\n");
    printf("\t /*   Binary Search Tree ADT    */\n");
    printf("\t /*=============================*/\n\n");
    printf("\n$ ./BinarySearchTree\n\n");
    printf(" Options: \n");
    printf("\t - e returns the number of elements\n");
    printf("\t - i insert one element\n"); 
    printf("\t - r removes an element\n"); 
    printf("\t - d delete the entire tree \n");  
    printf("\t - p prints the elements in preorder, inorder, postorder\n");
    printf("\t - q quit the program \n"); 
    printf("\n\n Note: Options can be extended using other methods, i.e. findMax, findMin, etc.  \n");
}




/*=============================*/
/*  Linked List Test: main()   */
/*=============================*/

int main(void){

        usage();
        char c;       // command	
	int quit = 0; // sentinel/termination	
        
        BST myTree = NULL;
        E newItem;

        printf("\n-");

	while (quit == 0)
	{

         if ( (c = getchar()) != '\n') {            
          

	switch (c)
	{
	case 'e':		
                if(size(myTree))
                   printf("\n\nTree has %d element/s.\n", size(myTree));		   
                else
                   printf("\n\nTree is Empty\n");
	        break;

	case 'i':               
	       printf(" ");
	       scanf("%d", &newItem);
	       myTree = insert(myTree, newItem);
	       break;

        case 'd':
               if(size(myTree) == 0)
		   printf("\n\nTree is Empty\n");
	       else
	       { 
                   deleteTree(myTree); 
                   myTree = NULL;
               }
               break;
 
	case 'r':
                if(size(myTree) == 0)
		   printf("\n\nTree is Empty\n");
		else
		{
		        printf(" ");
		        scanf("%d", &newItem);
             	        myTree = removeNode(myTree, newItem);
		}
	        break;
 

	case 'p':
                if(size(myTree) == 0)
		   printf("\n\nTree is Empty\n");
		else
		{      
                     printf("\n Preorder: \n\t");               
                     printPreorder(myTree);
                     printf("\n\n Inorder: \n\t");
                     printInorder(myTree);
                     printf("\n\n Postorder: \n\t");
         	     printPostorder(myTree);
                     printf("\n");
                }
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
   
        deleteTree(myTree);
	return EXIT_SUCCESS;
}

/*
Test:

$ ./BinarySearchTree 

-e


Tree is Empty

-i 6
 
-i 3
 
-i 12
 
-i 20
 
-i 19
 
-i 30
 
-p

 Preorder: 
	6 3 12 20 19 30 

 Inorder: 
	3 6 12 19 20 30 

 Postorder: 
	3 12 19 20 30 6 

-e


Tree has 6 element/s.

-r 30
 
-p

 Preorder: 
	6 3 12 20 19 

 Inorder: 
	3 6 12 19 20 

 Postorder: 
	3 12 19 20 6 

-r 12
 
-p

 Preorder: 
	6 3 20 19 

 Inorder: 
	3 6 19 20 

 Postorder: 
	3 19 20 6
*/

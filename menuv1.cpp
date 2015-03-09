//Sample program, Menu selection

#include<stdio.h>
#include<stdlib.h>

#define PI 3.1416

//function
void computeArea(); // declaration of function
void printMenu(){
     
       printf("\n Main Menu");
       printf("\n================");
       printf("\n A - AREA");
       printf("\n B - VOLUME");
       printf("\n C - PERIMETER");
       printf("\n E - Exit");
       printf("\n Enter selection: ");
}

// Global variables... // THIS IS A BAD PRACTICE
                        // WE'LL GET MIXED UP WITH OTHERS VARIABLEs



main()
{
/*****************DECLARATION***********************/
      char selection;
/****************************************/


/******************BEGINNING OF MENU**********************/
    // Menu Infinite Loop: Terminator at line 99
    while(1){
       printMenu();
       scanf("%c",&selection);
 
       switch(selection)
      {
       case 'A':
       case 'a':
              computeArea();
              break; // EndCase A


    case 'B': 
    case 'b': 
         printf("\n COMPUTE VOLUME OF:");
         // other selection  
         break; // EndCase B

    case 'C': 
    case 'c': 
         printf("\n COMPUTE PERIMETER OF:");
         // other selection
         break; // EndCase C

    case 'E':  
    case 'e': 
         printf("\n Exit now ..."); // Exit switch
         break;
 
    default: 
         printf("\n Invalid selection");
         break;            
    } //EndSwitch 
 
    getchar(); // Absorbs the buffered new line char

    printf("\n");

    /// Terminator
    if (selection == 'E' || selection == 'e')
       break; // Exit while
    } //EndWhile

/*****************END OF MENU***********************/


    printf("\n Bye ...\n");
    system("pause");
    return 0;   
}// EndMain


/// any variables declared in main() are DEAD!!!










 
void computeArea(){

    int s, x, y, r;   
    double Area;

 do { 
         printf("\n COMPUTE AREA OF:\n");
         printf("=========================");   
         printf("\n 1 - square");
         printf("\n 2 - rectangle");
         printf("\n 3 - circle");
         printf("\n 4 - back to main\n");

         printf("Enter Selection : ");
         scanf("%i",s);
         
         /// Square Area Computation 
         if( s==1 )
         { 
                 printf("Enter Value of x: ");
                 scanf("%i",&x);
           
                 Area = x * x;
                 printf("Area of square is %.2f sq. units.", Area);
         }
         
         /// Rectangle Area Computation
         else if( s==2 ){
                printf("Enter Value of x: ");
                scanf("%i",&x);
                printf("Enter Value of y: ");
                scanf("%i",&y);
                Area = x * y;
                printf("Area of rectangle is %.2f", Area);         
          }
 
          /// Circle Area Computation
           else if(s==3){
                printf("Enter Value of r: ");
                scanf("%i",&r);
                Area = PI * r * r;
                printf("Area of circle is %.2f.", Area);
           }

          /// Return to main()
           else if(s==4){
               printf("Returning to Main Menu  ... ");
           }   

           else {
               printf("Invalid input! Please try again ... ");  
           }
         } while (s != 4); // Repeat case A menu unless s is 4.


}

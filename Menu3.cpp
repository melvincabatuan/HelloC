#include<stdio.h>
#include<stdlib.h>

#define NUMBER_OF_DATA 10

int data[10]; // Global scope //NOTE: This is not a good practice!!!

void displayData();
void inputData(); /* Read the ten numbers */
void getTotal();
void getMean();
void getMedian();
void getMode();
void getStdDev();


void displayMainMenu(){
       printf("\n Main Menu");
       printf("\n================");
       printf("\n A - INPUT DATASET (10 integers)");
       printf("\n B - TOTAL/DISPLAY");
       printf("\n C - MEAN/DISPLAY");
       printf("\n D - MEDIAN/DISPLAY");
       printf("\n E - MODE/DISPLAY");
       printf("\n F - STANDARD DEVIATION/DISPLAY");
       printf("\n Enter selection: ");
}



main()
{
  
      
    char selection;    
    // Menu Infinite Loop: Terminator at line 99
    while(1){
       displayMainMenu();
       scanf("%c",&selection);
 
       switch(selection)
      {
       case 'A':
       case 'a':
                 inputData();
                 break; // EndCase A

       case 'B': 
       case 'b': 
                 getTotal();
                 break; // EndCase B

       case 'C': 
       case 'c': 
                getMean();
                break; // EndCase C
       
       case 'D': 
       case 'd': 
                getMedian();
                break; // EndCase D

       case 'E':  
       case 'e': 
                getMode();
                break; // EndCase E
                
       case 'F':  
       case 'f': 
                getStdDev();
                break; // EndCase F
 
      default: 
         printf("\n Invalid selection");
         return main();            
    } //EndSwitch 
 
    getchar(); // Absorbs the buffered new line char

    printf("\n");

    /// Terminator
    if (selection == 'E' || selection == 'e')
       break; // Exit while
    } //EndWhile

    printf("\n Bye ...\n");
    return 0;   
}// EndMain
   

/* Read the ten numbers */
void inputData(){     
     
	for(int i = 0; i < NUMBER_OF_DATA; i++)
	{
		printf("Enter data[%d]: ", i);
	    scanf("%d", &data[i]); 	/* Read a number */
    } 
    printf("\nYour input data are the following:\n");
    displayData();
 }
 
void displayData(){  
 
	for(int i = 0; i < NUMBER_OF_DATA; i++)
	{
		printf("data[%d] = %d\n", i, data[i] );
    } 
 }
     
/* Get the total values */     
void getTotal(){
     
     int sum = 0; 
      
     	for(int i = 0; i < NUMBER_OF_DATA; i++)
	{
		sum += data[i]; 	
	}
	printf("The total of the following dataset: \n\n");
	displayData();
	printf("\n... is equal to %d.\n", sum);
 }
     
void getMean(){
     
     }
     
void getMedian(){
     
     }
     
void getMode(){
     
     }
     
void getStdDev(){
     
     }





 

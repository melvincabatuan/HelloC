//Sample program, Menu selection

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    char selection;
    int s, x, y, r;
    const double pi = 3.1416;
    
    double Area;
    printf("\n Menu");
    printf("\n========");
    printf("\n A - AREA");
    printf("\n B - VOLUME");
    printf("\n C - PERIMETER");
    printf("\n E - Exit");
    printf("\n Enter selection: ");
    scanf("%c",&selection);
    
    system("cls");
    
switch(selection)
{
    case 'A': {
         printf("\n COMPUTE AREA OF:\n");
         {
         printf("\n 1 - square");
         printf("\n 2 - rectangle");
         printf("\n 3 - circle");
         printf("\n 4 - back to main\n");
        
         
         printf("Enter Selection : ");
         scanf("%i",&s);
         
         {
         if(s==1)
         { 
                 printf("Enter Value of x");
                 scanf("%i",&x);
           
                 Area = x * x;
                 printf("Area of square is %f", Area);
                 getch();
                 return main();
           }
           else if(s==2){
                printf("Enter Value of x");
                scanf("%i",&x);
                printf("Enter Value of y");
                scanf("%i",&y);
                Area = x * y;
                printf("Area of rectangle is %f", Area);
                getch();
                return main();           }
           else if(s==3){
                printf("Enter Value of r ");
                scanf("%i",&r);
                Area = pi * r * r;
                printf("Area of circle is %f", Area);
                getch();
                return main();
           }
           else if(s==4){
                return main();;
           
         // other selection
         }
         }
         }}
         break;
    case 'B': {
         printf("\n COMPUTE VOLUME OF:");
         // other selection
         }
    break;
    case 'C': {
         printf("\n COMPUTE PERIMETER OF:");
         // other selection
         }
    break;
    case 'E': {
         printf("\n To exit the menu");
         // other selection
         }
    break;
             //Other than A, M, D and X...
    //default: 
     //       printf("\n Invalid selection");
            //No break in the default case
}
   // printf("\n");
   // getch();
   // system("pause");
    return main();
}
    
    
    

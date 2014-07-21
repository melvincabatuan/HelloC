#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//This is a demonstration of how to use menus

int main() {
 int x=0;
 while (1) {
        
     printf("\nEnter options\n");
     printf("\n[1] Display\n[2] Alarm \n[3] Quit");
     printf("\nEnter options\n");
     scanf("%d",&x);
     
     if (x==1) {
         printf("\nYou chose display\n");   
        }
     else if (x==2) {
         printf("\nAlarm\n");   
        }
    else if (x==3) break;
    else printf("\nWrong option\n");
    
    printf("\nPress a key to continue");
    getch();
    //system is in stdlib.h, you can use it to clear your screen
    system("cls");
    }   
    printf("\nProgram end");
    getch();
}

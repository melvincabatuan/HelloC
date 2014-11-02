#include <stdio.h>

/*********************** MKC ***************************/

	 void main() {
                /// Input
		int denomination[] = { 25, 10, 5, 1 };
                int length = sizeof(denomination)/sizeof(denomination[0]);
		int amount = 97;
    
                printf("With the amount equal to %d.\n", amount);
		printf("The minimal number of coins is %d.\n", change(denomination, length, amount));
                printf("The minimal number of coins is %d.\n", change2(denomination, length, amount));
	}

	int change(int denomination[], int length, int amount) {
                int numberOfCoins = 0;
                int i;
                for (i = 0; i<length; i++){
                     while (amount >= denomination[i]){
                         amount -= denomination[i];
                         numberOfCoins++;
                      }
                }
                return numberOfCoins;
	}


           
        int change2(int denomination[], int length, int amount) {
                int numberOfCoins = 0;
                int i;
                for (i = 0; i<length; i++){
                     while (amount > 0){ 
                         if (amount - denomination[i] >= 0) { 
                             amount -= denomination[i];
                             numberOfCoins++;
                         }else
                             break;
                     }
                }
                return numberOfCoins;
	}



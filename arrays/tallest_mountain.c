#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mountHeights[] = {3, 4, 1, 5, 2, 9, 8 , 7 , 6};
    
    int max = mountHeights[0];

    for (int i = 1; i < 9; i++){
	    if(mountHeights[i] > max){
			max = mountHeights[i];
		}
	}
	printf("The tallest mountain is %d.\n", max);
    system("pause");
    return 0;
}

#include<conio.h>
#include<stdio.h>

int num[3];
int i,k,j;


int main(){
	
	printf("Input 4 integers: ");
	for (i=0; i<4; i++)
		scanf("%d", &num[i]);
		
	printf("Summary of Iteration:\n\n");
	for (i=0; i<3; i++) {
		if (num[i] > num[i+1]){
			k = num[i+1];
			num[i+1]=num[i];
			num[i]=k;
		}//end if
	}//end for	

	for (j=1;j<4;j++) {
		printf("Iteration[%d] = ",j);
		for (i=0;i<4;i++)
			printf("%d ",num[i]);
		printf("\n");
		}//end for
	return 0;
}

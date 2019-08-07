#include <stdio.h>  // import a library

 
int main(){
	float score1, score2, score3, score4, average;
	printf("Input four scores:");
	scanf("%f %f %f %f", &score1, &score2, &score3, &score4); 
 
	
	average = ( score1 + score2 + score3 + score4)/ 4.0;
	
	printf( "The average is %0.2f.", average );
	
	if (average >= 70){
		printf( "\nYou PASS!");
	} else {
		printf( "\nYou FAIL!");
	}
	return 0;
}

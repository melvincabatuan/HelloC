#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std; 

void polynomials(){
	
	int CONSTANT_SIZE, variable;
	int exponent =0;
	int my_array[] = {1,2,3,4,5,6,7,8,9,10};
	int order =10;
	int equation;
	
	cin>> CONSTANT_SIZE;
	
	for ( int poly = 0; poly < CONSTANT_SIZE; poly++ ){	
		for ( int i =0 ; i<order +1; i++){
	//		cout<< CONSTANT_SIZE << "x^"< my_array[i] ;
			
		exponent = exponent + my_array[i];
		
		equation= variable*my_array[poly];
		
		
	}
}
	
}

void statistics(){
	
	float sum=0;
	double data[9];
	float mean, stddev;
	float pre_stddev=0;
	int SAMPLE_SIZE;
	
	cout<<"Enter Sample Size: ";
	cin>> SAMPLE_SIZE;
	cout<<"Enter your data:" ;
	
	for (int j=0; j<SAMPLE_SIZE; j++){

	 	cin>> data[j];
	 	
	 	sum= data[j] + sum;		
		mean= sum/SAMPLE_SIZE;
		pre_stddev= (data[j]-mean)*(data[j]-mean) + pre_stddev;
		cout<<mean<<endl;
		cout<<pre_stddev<<endl;
	}
	stddev= sqrt(pre_stddev/(SAMPLE_SIZE));
	cout<<"Mean: "<< mean<< endl;;
	cout<<"Summation: "<< sum<< endl;;
	cout<<"Standard Deviation: "<< stddev << endl;;
}

void matrix(){
    
	int choice1;
    
   int row1, col1, row2, col2, c, d;
   double matrix1[10][10], matrix2[10][10], sum[10][10];

   cout << "Enter the number of rows and columns of matrix A ";
   cin >> row1 >> col1;
   cout << "Enter the elements of matrix A \n";
 
   for (  c = 0 ; c < row1 ; c++ ){
   	      for ( d = 0 ; d < col1 ; d++ ){
   	      	         cin >> matrix1[c][d];
			 }

   }

         
   cout << "Enter the number of rows and columns of matrix B ";
   cin >> row2 >> col2;
   cout << "Enter the elements of matrix B \n"; 
      for ( c = 0 ; c < row2 ;c++ ){
     	 for ( d = 0 ; d < col2 ; d++ ){
     	 	cin >> matrix2[c][d];
     	 }
		}
            


   
   	printf("---- Matrix Menu ---- \n");
	printf("1. Addition of Matrix A and B \n");
	printf("2. Multiplication of Matrix A and B \n");
	printf("3. Transpose of Matrix A \n");
	printf("4. Transpose of Matrix B \n");
	printf("Quit ");
   
    cin>>choice1;
    
	while(choice1 <=4){
	switch(choice1){
		case 1: //SUM
			 if (row1==col2){
  			 for ( c = 0 ; c < row1&&row2 ; c++ )
     		 for ( d = 0 ; d < col1&&col2 ; d++ )
      		   sum[c][d] = matrix1[c][d] + matrix2[c][d];
      		   
      	    cout << "Sum:\n";
      	 	 for ( c = 0 ; c <row1&&row2 ; c++ )
      		for ( d = 0 ; d < col1&&col2 ; d++ )
        		 cout << sum[c][d] << "\t";
 				cout << endl;
			break;
		case 2: //MULTIPLICATION
			
			break;
		case 3: //TRANSPOSE OF MATRIX A
			 for ( c = 0 ; c <row1; c++ ){
     		 for ( d = 0 ; d < col1; d++ )
         		cout << matrix1[d][c] << "\t";
				}
			break;
		case 4: //TRANSPOSE OF MATRIX B
			 for ( c = 0 ; c <row2 ; c++ ){
     		 for ( d = 0 ; d <col2 ; d++ )
         		cout << matrix2[d][c] << "\t";
				}
			break;
		case 5: 
			printf("End program");
			break;	
		default:
			cout<<"Invalid! The inputted number of rows for matrix A is not equal to that of the columns of matrix B.";
	
		}




}
}
}

int main(){

	int choice;
	
	printf("---- Main Menu ---- \n");
	printf("1. Polynomials \n");
	printf("2. Statistical Algorithms \n");
	printf("3. Matrix Operations \n");
	printf("Quit ");
	
	

	cin>> choice;
	system("cls");
	
while(choice <=4){
	switch(choice){
		case 1:
			polynomials();
			break;
		case 2:
			statistics();
			break;
		case 3:
			matrix();
			break;
		case 4:
			printf("End program");
			break;
		default:
			printf("Invalid input. Please try again!");
		
		}
	
	return 0;
}
}



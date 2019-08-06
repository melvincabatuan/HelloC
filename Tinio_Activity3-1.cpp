#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std; 

void polynomials()	
{
}


void statistical()
{
	double data[9];
	float mean1, mean2;
	float standard_deviation;
	float prestandard_deviation = 0;
	int sum1, sum2, sum3 = 0;
	int n1,n2,n3;
	int submenu1;
	int x;
	
	do{
	printf("----------------------------------------\n");
	printf("1. Mean\n");
	printf("2. Standard deviation\n");
	printf("3. Summation of data\n");
	printf("4. Back to Main Menu. \n");
	printf("----------------------------------------\n");
	printf("Choose the number for your choice: ");
	scanf("%d",&submenu1);
	printf("\n\n");
	
	if(submenu1 == 1)
	{
		cout<<"Enter value sample size (n): "; cin>>n1;
		cout <<"Enter your data:" ;
		
		for(int x=0; x<n1; x++)
		{
		    cin>> data[x];
			sum1 += data[x];
			mean1 = sum1/n1;
		}
		cout << "Mean: " <<mean1<<endl;	
	}
	else if(submenu1 == 2)
	{
		cout<<"Enter value sample size (n): "; cin>>n2;
		cout<<"Enter your data:" ;
		
		for(int x=0; x<n2; x++)
		{
		    cin>> data[x];
		    sum2 += data[x];
		    mean2 = sum2/n2;
		  	prestandard_deviation += pow(data[x]-mean2,2);
	       	standard_deviation = sqrt(prestandard_deviation/n2);
		}
	    cout << "Standard Deviation: " <<standard_deviation<<endl;		
	}
	else if(submenu1 == 3)
	{
		cout<<"Enter value sample size (n): "; cin>>n3;
		cout<<"Enter your data:" ;
		
		for(int x=0; x<n3; x++)
		{
			cin>> data[x];
			sum3 += data[x];
		}
		cout << "Summation: " <<sum3<<endl;	
	}
	else if(submenu1 == 4)
	{ 
		//return to main menu
	}
	else
	{
		printf("Invalid Input. Please try again.");
		printf("\n\n");
	}
	}while(submenu1 != 4);
}

void matrix()
{
	int submenu2, row, column, row1, column1, row2, column2, x, y, k;
	int first[10][10], second[10][10], matrix[10][10];
	int sum[10][10], product[10][10], transpose[10][10];
	int add = 0;
	
	do{			
	printf("----------------------------------------\n");
	printf("1. Matrix Addition\n");
	printf("2. Matrix Multiplication \n");
	printf("3. Matrix Transpose \n");
	printf("4. Back to Main Menu. \n");
	printf("----------------------------------------\n");
	printf("Choose the number for your choice: ");
	scanf("%d",&submenu2);
	printf("\n\n");
	 
	if(submenu2 == 1)
	{
		cout << "Enter the number of rows and columns of matrix ";
   		cin >> row >> column;
	
		cout << "Enter the elements of first matrix\n";
   		for (  x = 0 ; x < row ; x++ )
   		for ( y = 0 ; y < column ; y++ )
   		cin >> first[x][y];
 
  	 	cout << "Enter the elements of second matrix\n";
  		for ( x = 0 ; x < row ;x++ )
   		for ( y = 0 ; y < column ; y++ )
   		 cin >> second[x][y]; 	
		
   		for ( x = 0 ; x < row ; x++ )
      		for ( y = 0 ; y < column ; y++ )
       		sum[x][y] = first[x][y] + second[x][y];
 
   		cout << "Sum of entered matrices: \n";
   		for ( x = 0 ; x < row ; x++ )
   		{
      			for ( y = 0 ; y < column ; y++ )
         			cout << sum[x][y] << "\t";
      			cout << endl;
   		}	
   	}			
	else if(submenu2 == 2) 
	{
		
		cout << "Enter number of rows and columns of first matrix: ";
		cin >> row1 >> column1;
		cout << "Enter the elements of first matrix\n";
   		for (  x = 0 ; x < row1 ; x++ )
   		for ( y = 0 ; y < column1 ; y++ )
   		cin >> first[x][y];
		
		cout << "Enter number of rows and columns of second matrix: ";
		cin >> row2 >> column2;
		
if (column1 != row2)
{
		cout << "Invalid dimensions. The matrices can't be multiplied with each other.";	
	}
    	else
 	{
   		cout << "Enter the elements of second matrix\n";
  		for ( x = 0 ; x < row2 ;x++ )
   		for ( y = 0 ; y < column2 ; y++ )
   		cin >> second[x][y]; 
 
    		for (x = 0; x < row1; x++) 
		{
      	 		for (y = 0; y < column2; y++) 
			{
        				for (k = 0; k < row2; k++) 
					{
          						add = add + first[x][k]*second[k][y];
       		 			}
        				product[x][y] = add;
        				add=0;
      			}
   		 }
    		cout << "Product of the matrices: "<< "\n";
 
   		for (x = 0; x < row1; x++) 
		{
      			for (y = 0; y < column2; y++)
       			cout << product[x][y] << "\t";
       			cout << endl;
    		}
  		}
	}


	else if(submenu2 == 3)
	{
		cout << "Enter number of rows and columns of first matrix: ";
		cin >> row >> column;
		
		cout << "Enter the elements of matrix\n";
   		for (  x = 0 ; x < row ; x++ )
   		for ( y = 0 ; y < column ; y++ )
   		cin >> matrix[x][y];
   		
   		for ( x = 0 ; x < row ; x++ )
      		for ( y = 0 ; y < column ; y++ )
        		transpose[y][x] = matrix[x][y];		
        
		cout << "Transpose of the  matrix: \n";
   		for ( x = 0 ; x < column ; x++ )
   		{
      			for ( y = 0 ; y < row ; y++ )
         			cout << transpose[x][y] << "\t";
         			cout << endl;
   		}	
	}
	else if(submenu2 == 4)
	{
		//return to main menu
	}
	else
	{
		printf("Invalid Input. Please try again.");
		printf("\n\n");
	}
	}while(submenu2 != 4);
}

int main()
{
	int choice = 0;
	
	do{
	printf("---------- Main Menu ----------\n");
	printf("1. Polynomials \n");
	printf("2. Statistical Algorithms \n");
	printf("3. Matrix Operations \n");
	printf("4. Quit \n");
	printf("-------------------------------\n");
	printf("Choose the number of your choice: ");
	scanf("%d",&choice);
	printf("\n\n");
	
	switch(choice)
	{
		case 1:
		{	
			printf("\n");
			polynomials();
			break;		
		}
		case 2:
		{
			printf("\n");
			statistical();
			break;	
		}
		case 3:
		{
			printf("\n");
			matrix();
			break;	
		}		
		case 4:
		{
			printf("\n");
			printf("Quiting the program.\n");
			return 0;
			break;
		}
		default:
		{
			printf("\n");
			printf("Invalid Input. Please choose a valid number.\n");
		}
	}
	}while(choice !=4);
	printf("\n\n");
	return choice;
}


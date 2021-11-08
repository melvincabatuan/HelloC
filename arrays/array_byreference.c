#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void sumPoly(double* varpoly,double* sumpoly, int* orderpoly,double xp[])
{
	double polytemp;
	int i;

	for(i=0;i<=*orderpoly;i++)
	{
		printf("%.2f\n",xp[i]); 
		polytemp=xp[i]*pow(*varpoly,i);
		*sumpoly= *sumpoly + polytemp; 
	}	 
}

void stat(double* average, int* value,double yp[], double* summ, double* devstd)
{
	double algotemp,sumalgo ;
	*summ = yp[1]; 	
	int i;
	for (i=2;i<=*value;i++)
 		*summ=*summ+yp[i];
 	*average=(*summ/ *value);

	for (i=1;i<=*value;i++)
	{ 
		algotemp=pow((yp[i]-*average),2);
		sumalgo= sumalgo+algotemp;
	}
		*devstd=sqrt(sumalgo/ *value);
}



void addMatrix(int* Row1,int* Col1,int* Row2,int* Col2,double N1[10][10],double N2[10][10],double N3[10][10])
{
     int i,j,k;
     double temp[10][10];
     for(i=0;i<*Row1;i++)
	for(j=0;j<*Col2;j++)
	{
	for(k=0;k<*Col1;k++)
	N3[i][j]=N1[i][j]+N2[i][j];
	}  
}

void subMatrix(int* Row1,int* Col1,int* Row2,int* Col2,double N1[10][10],double N2[10][10],double N3[10][10])
{
     int i,j,k;
     double temp[10][10];
   	for(i=0;i<*Row1;i++)
		for(j=0;j<*Col2;j++)
		{	
		for(k=0;k<*Col1;k++)
			N3[i][j]=N1[i][j]-N2[i][j];

		}  
}

void multiplyMatrix(int* Row1,int* Col1,int* Row2,int* Col2,double N1[10][10],double N2[10][10],double N3[10][10])
{
     int i,j,k;
     for(i=0;i<*Row1;i++)
	for(j=0;j<*Col2;j++)
	{
		for(k=0;k<*Col1;k++)
		N3[i][j]=N3[i][j]+N1[i][k]*N2[k][j];
}
}


int main()
{ 
 
	int n,order,polyselect,i,j ,val,k,l,m,r1,r2,c1,c2;
	double  x[10],y[10],m1[10][10],m2[10][10],m3[10][10],polyvar, polysum,ave,stdev,sum;
	
        while(1)
        {
	printf("\n\t\t\t\tMENU: \n\n");
	printf("\n1- POLYNOMIAL EVALUATION\n2- STATISTICAL FORMULA\n3- MATRIX OPERATION\n4- EXIT\n\n");
	printf("Enter the number of choice: \n");
	scanf("%d", &n);

	switch(n)
	{
	case 1: {
	int p;
	printf("YOU HAVE CHOSEN POLYNOMIAL EVALUATION\n");
	printf("\nEnter order: \n");
	scanf("%d",&order);
	for(i=0;i<=order;i++)
	{ 
	printf("Enter constant of x^%d\n",i);
	scanf("%lf", &x[i]);
	}

	printf("\nInput Value of x: ");
	scanf("%lf",&polyvar);
	polysum = 0;
	sumPoly(&polyvar,&polysum,&order,x);
	printf("Sum= %.2lf\n",polysum);
	break;
	}


	case 2: {
	printf("Statistical Algorithms\n");
	printf("Enter number of Values: \n");
	scanf("%d", &val);

	for (k=1;k<=val;k++)
	{
	printf("Enter value of y[%d]\n",k);
	scanf("%lf",&y[k]);
	}

	stat(&ave,&val,y,&sum,&stdev);
	printf("The mean is %lf\n",ave);
	printf("The Summation is %lf\n",sum);
	printf("The Standard Deviation is %lf \n",stdev);
	break;
	}

	case 3: 
     {
	int p;
	printf("Matrix Operation Menu\n");
	printf("1-Addition\n");
	printf("2-Subtraction\n");
	printf("3-Multiplication\n");
	scanf("%d",&n);

	switch(n)
	{ case 1: {
	printf("Addition of Matrices\n\n");
	printf("Enter number of rows in matrix A: \n");
	scanf("%d",&r1);
	printf("Enter number of columns in matrix A: \n");
	scanf("%d",&c1);
	printf("Enter number of rows in matrix B: \n");
	scanf("%d",&r2);
	printf("Enter number of columns in matrix B: \n");
	scanf("%d",&c2);

	if(r1==r2 && c1==c2 )
	{
	printf("Addition is possible: \n");
	printf("Input values of Matrix A: \n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%lf",&m1[i][j]);
	printf("Input values of Matrix B: \n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
		scanf("%lf",&m2[i][j]);

	printf("Matrix A: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf("\t%lf",m1[i][j]);
	printf("\n");
	}

	printf("Matrix B: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		printf("\t%lf",m2[i][j]);
		printf("\n");
	}

	addMatrix(&r1,&c1,&r2,&c2,m1,m2,m3);
	printf("Addition of Matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		printf("\t%lf",m3[i][j]);
		printf("\n");
	}
	break;
	}

	else
	printf("Addition is not possible\n");
	break;
}

	case 2: {
	printf("Subtraction of Matrices\n\n");
	printf("Enter number of row in matrix A: \n");
	scanf("%d",&r1);
	printf("Enter number of column in matrix A: \n");
	scanf("%d",&c1);
	printf("Enter number of row in matrix B: \n");
	scanf("%d",&r2);
	printf("Enter number of column in matrix B: \n");
	scanf("%d",&c2);

	if(r1==r2 && c1==c2)
	{
	printf("Subtraction is possible: \n");
	
	printf("Input values of Matrix A: \n");
	for(i=0;i<r1;i++)
 		for(j=0;j<c1;j++)
			scanf("%lf",&m1[i][j]);
 	
	printf("Input values of Matrix B: \n");
	for(i=0;i<r2;i++)
 		for(j=0;j<c2;j++)
			scanf("%lf",&m2[i][j]);
 
	printf("Matrix A: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf("\t%lf",m1[i][j]);
		printf("\n");
	}

	printf("Matrix B: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		printf("\t%lf",m2[i][j]);
		printf("\n");
	}

	subMatrix(&r1,&c1,&r2,&c2,m1,m2,m3);

	printf("Subtraction of Matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		printf("\t%lf",m3[i][j]);
		printf("\n");
	}
}

else
	printf("Subtraction is not possible\n");
	break;
}

case 3: 
     {
	printf("Multiplication of Matrices\n\n");
	printf("Enter number of row in matrix A: \n");
	scanf("%d",&r1);
	printf("Enter number of column in matrix A: \n");
	scanf("%d",&c1);
	printf("Enter number of row in matrix B: \n");
	scanf("%d",&r2);
	printf("Enter number of column in matrix B: \n");
	scanf("%d",&c2);

	if(c1==r2)
	{
	printf("Multiplication is possible: \n");
	printf("Input values of Matrix A: \n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%lf",&m1[i][j]);
	printf("Input values of Matrix B: \n");
	for(i=0;i<r2;i++)
 		for(j=0;j<c2;j++)
		scanf("%lf",&m2[i][j]);
 
	printf("Matrix A: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf("\t%lf",m1[i][j]);
		printf("\n");
	}

	printf("Matrix B: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		printf("\t%lf",m2[i][j]);
		printf("\n");
	}

	multiplyMatrix(&r1,&c1,&r2,&c2,m1,m2,m3);
	printf("Multiplication of Matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		printf("\t%lf",m3[i][j]);
	printf("\n");
	}
	break;
}
	else
	printf("Multiplication is not possible");
	break;

} //endofcase3: mat mult
} //end of switch n
} //endofcase3: mat operation

case 4: break;

default: printf("Invalid Input!\n"); break;
} //end of switch menu

 // terminator
 if(n == 4)
   break; // exit while
} //end of while
return 0;
} //end of main

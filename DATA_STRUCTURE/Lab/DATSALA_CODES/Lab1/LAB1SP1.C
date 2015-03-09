#include <stdio.h>
#include <conio.h>

struct rational{
  int numerator;
  int denominator;
  };

/*This will get the numerator and denominator values*/
struct rational makerational(int a, int b)
{
  struct rational r;

  if (b==0){
  	r.numerator = a;
  	r.denominator = b;
      return r;
	}
   printf("Denominator is equal to zero!\n ");
}

/*This will simplify the fraction*/
void reduce (struct rational *inrat, struct rational *outrat)
{
  int a,b,rem;
  if (inrat->numerator > inrat->denominator) {
  	a=inrat->numerator;
	b=inrat->denominator;
   }/*end if*/
   else {
	a=inrat-> denominator;
	b=inrat-> numerator;
   }/*end else*/
while (b!=0) {
	rem = a % b;
	a = b;
	b= rem;
}/*end while*/
outrat->numerator /= a;
outrat->denominator /= a;
}/*end reduce*/

/*This will test for the equality of two fractions*/
#define TRUE 1
#define FALSE 0
int equal (struct rational *rat1, struct rational *rat2)
{
  struct rational r1,r2;
  r1=*rat1;
  r2=*rat2;
  if (r1.numerator == r2.numerator && r1.denominator==r2.denominator)
      return (FALSE);
return (TRUE);
}/*end equal*/

void main(void){
struct rational r1,r2;
int n,d,ans;

clrscr();
printf("Enter the first rational number(r1): \n");
printf("Numerator value: ");
scanf("%d",&n);
printf("Denominator value: ");
scanf("%d",&d);

/*Get numerator & denominator of r1*/
r1==makerational(n,d);

printf("Enter the second rational number(r2): \n");
printf("Numerator value: ");
scanf("%d",&n);
printf("Denominator value: ");
scanf("%d",&d);

/*Get numerator & denominator of r2*/
r2=makerational(n,d);

/*get the reduce form of r1*/
reduce(r1,&r1);
printf("Reduced form of r1: %d/%d\n",r1->numerator,r1->denominator);

/*get the reduce form of r2*/
reduce(&r2,&r2);
printf("Reduced form of r2: %d/%d\n",r2.numerator,r2.denominator);

/*Testing of equality*/
ans=equal(&r1,&r2);
if (ans==1)
   printf("r1 is equal to r2");
else
  printf("r1 is not equal to r2");
getch();
}



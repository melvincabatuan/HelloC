#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
      int row, col;
      printf(" ");
      
for(col=1; col<=10; col++)
      printf("%i    ",col);//cout<<setw(5)<<col;
      printf("\n");//cout<<endl;
      printf(" ");//cout<<" ";
      
for(col=0; col<=50; col++)
      printf("-");//cout<<'-';
      
for(row=1; row<=10; row++){
      printf("\n%2i",row);//cout<<endl<<setw(2)<<row<<"|";
      
for(col=1; col<=10; col++)
      printf("%5i",row*col);//cout<<setw(5)<<row*col;
      }
      printf("\n");
   system("pause");
   return 0;
}

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

int choice;

do {

cout<<"\n Menu Selection"<<"\n";
cout<<"\n 0. Exit";
cout<<"\n 1. Operation/Formula 1";
cout<<"\n 2. Operation/Formula 2";
cout<<"\n 3. Operation/Formula 3 and so on...";

cout<<"\n\n Enter your choice: ";
cin>>choice;
system("cls");

switch (choice)
{
       case 1:
            cout<<"Process operation1 or solve formula1"<<endl;
            break;
       case 2:
            cout<<"Process operation2 or solve formula2"<<endl;
            break;
       case 3:
            cout<<"Process operation3 or solve formula3"<<endl;
            break;
       case 0:       
            break;  
       default:
            cout << "The choice is invalid!"<<endl;     
}//end of switch

} while(choice!=0);
system("pause");
return 0;
}//end of main

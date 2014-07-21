//program to illustrate a do-while loop

#include<iostream>

using namespace std;

main()
{
  int selection;
  do {
   cout<<"\n Menu"<<"\n";
   cout<<"\n 0. Exit";
   cout<<"\n 1. Append";
   cout<<"\n 2. Delete";
   cout<<"\n 3. Modify";
   cout<<"\n\n Enter selection: ";
   cin>>selection;
  }while((selection > 0) && (selection < 4));

  //true for 1, 2 and 3 ONLY, then repeat
  //false for other numbers including 0, then stop...
  //the do loop is repeated if the while expression is true.
  cout<<"\n Exiting now... Bye!\n";
  return 0;
}


/*
Sample Run:

$ g++ menu2.cpp -o menu2
$ ./menu2

 Menu

 0. Exit
 1. Append
 2. Delete
 3. Modify

 Enter selection: 1

 Menu

 0. Exit
 1. Append
 2. Delete
 3. Modify

 Enter selection: 0

 Exiting now... Bye!
*/

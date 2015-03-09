//This program tests various operations of a linked stack
#include <iostream>
#include "linkedStack.h"


using namespace std;

void testCopy(linkedStackType<string> OStack);


int main()
{
   /// stack declaration
   linkedStackType<string> stack;
   linkedStackType<string> otherStack;
   linkedStackType<string> newStack;

   //Add elements into stack
   stack.push("Milk");
   stack.push("Butter");
   stack.push("Eggs");

   //Use the assignment operator to copy the elements
   //of stack into newStack
   newStack = stack;
   cout << "After the assignment operator, newStack: " << endl;

   //Output the elements of newStack
   while (!newStack.isEmptyStack())
   {
      cout << newStack.top() << endl;
      newStack.pop();
   }

   //Use the assignment operator to copy the elements
   //of stack into otherStack
   otherStack = stack;

   cout << "Testing the copy constructor." << endl;
   testCopy(otherStack);
   cout << "After the copy constructor, otherStack: " << endl;
   while (!otherStack.isEmptyStack())
   {
      cout << otherStack.top() << endl;
      otherStack.pop();
    }
   return 0;
}



//Function to test the copy constructor
void testCopy(linkedStackType<string> OStack)
{
  cout << "Stack in the function testCopy:" << endl;
  while (!OStack.isEmptyStack())
  {
    cout << OStack.top() << endl;
    OStack.pop();
  }
}

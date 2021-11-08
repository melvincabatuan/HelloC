//Program: Print a triangle of stars
/*
$ ./triangle 
Enter the number of star lines (1 to 20) to be printed: 21
Number of star lines should be between 1 and 20
Enter the number of star lines (1 to 20) to be printed: 20


                              * 
                             * * 
                            * * * 
                           * * * * 
                          * * * * * 
                         * * * * * * 
                        * * * * * * * 
                       * * * * * * * * 
                      * * * * * * * * * 
                     * * * * * * * * * * 
                    * * * * * * * * * * * 
                   * * * * * * * * * * * * 
                  * * * * * * * * * * * * * 
                 * * * * * * * * * * * * * * 
                * * * * * * * * * * * * * * * 
               * * * * * * * * * * * * * * * * 
              * * * * * * * * * * * * * * * * * 
             * * * * * * * * * * * * * * * * * * 
            * * * * * * * * * * * * * * * * * * * 
           * * * * * * * * * * * * * * * * * * * * 
*/

#include <iostream>
using namespace std;

void printStars(int blanks, int starsInLine);

int main()
{
  int noOfLines; //variable to store the number of lines
  int counter; //for loop control variable
  int noOfBlanks; //variable to store the number of blanks
  cout << "Enter the number of star lines (1 to 20) to be printed: "; 
  cin >> noOfLines;  

  while (noOfLines < 0 || noOfLines > 20)  
  {
  cout << "Number of star lines should be between 1 and 20" << endl;  
  cout << "Enter the number of star lines (1 to 20) to be printed: ";  
  cin >> noOfLines;  
  }

  cout << endl << endl;  
  noOfBlanks = 30;  
  for (counter = 1; counter <= noOfLines; counter++)  
  {
  printStars(noOfBlanks, counter);  
  noOfBlanks--;  
  }
  return 0;  
}




void printStars(int blanks, int starsInLine)
{
   int count;
   for (count = 1; count <= blanks; count++)  
       cout << ' '; 
   for (count = 1; count <= starsInLine; count++)  
       cout << "* ";  
   cout << endl;
}

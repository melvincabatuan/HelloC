// Generate lottery numbers

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;

int main()
{
   const int DifferentNumbers = 49;
   const int NumbersPerGame = 6; // 6/49 lotto

   const int Threshold = 2; // Threshold frequency for betting

   //Prompt for and read number of games
   int Games;
   cout << "How many games to simulate?:\n";
   cin >> Games;

   // Generate the numbers
    int Numbers[ DifferentNumbers + 1 ] = {0}; // init null
   
   for( int i = 0; i < Games; i++)
      for( int j = 0; j < NumbersPerGame; j++)    
          Numbers[ rand() % DifferentNumbers + 1 ]++;
     
    // Output the summary
   for(int k=1; k <= DifferentNumbers; k++)
   {
       if(Numbers[ k ] > Threshold)    
       cout << k << " occurs " << Numbers[ k ] << " time(s)\n ";
   }
   return 0;
}

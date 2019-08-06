#include <iostream>


int main(){
	
	const int ROW_SIZE = 3;
	const int COL_SIZE = 3;
	
	// array - is a collection of same elements
	//float my_array[] = {10.0f , 20.5f , 30.0f}; // float
//	                //      0        1       2
	// How to i
    // float my_array[ROW_SIZE];
    float my_array[ROW_SIZE][COL_SIZE];
    
    for(int row = 0; row < ROW_SIZE; row++)
    	for(int col = 0; col < COL_SIZE; col++) {
    		std::cin >> my_array[row][col];
		}
    	
    
    // How to print
    for(int row = 0; row < ROW_SIZE; row++){
    	for(int col = 0; col < COL_SIZE; col++) {
    		std::cout << my_array[row][col] << " ";
		}
		std::cout << "\n";
	}
    	
  	

	
	return 0;
}

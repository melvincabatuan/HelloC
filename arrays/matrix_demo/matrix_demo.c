#include <stdio.h>
#include "my_header.h"


int main(){
    int matrix[3][4] = {
        {0, 1, 2, 3},  /* initializers for row indexed by 0 */
        {4, 5, 6, 7},  /* initializers for row indexed by 1 */
        {8, 9, 10, 11} /* initializers for row indexed by 2 */
    };

    display_matrix(matrix);

    return 0;
}
#include <stdio.h>

// DEFINITION:
// return_type function_name(INPUT_PARAMETERS)
float php2usd(float php){
    float usd = php / 52.368361f;
    printf("%0.2f PHP = %0.2f USD\n", php, usd);
}

int main(){
    php2usd(1000); // CALL
    return 0;
}
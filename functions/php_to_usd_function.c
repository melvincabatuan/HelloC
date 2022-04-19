#include <stdio.h>

// GLOBAL CONSTANTS: usual C practice
#define X_PHPUSD 52.368361f

float php2usd(float php);

int main()
{
    float my_pera;
    my_pera = 1000000.0f;
    php2usd(my_pera); // CALL
    return 0;
}

// DEFINITION:
// return_type function_name(INPUT_PARAMETERS)
float php2usd(float php)
{
    float usd = php / X_PHPUSD;
    printf("%0.2f PHP = %0.2f USD\n", php, usd);
}
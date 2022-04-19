#include <stdio.h>

// GLOBAL CONSTANTS: usual C practice
#define X_PHPUSD 52.368361f

double php2usd(double php);

int main()
{
    double my_pera, my_money;
    my_pera = 1000000.0f;
    my_money = php2usd(my_pera);  // FUNCTION CALL                      // USD
    printf("The converted value is %0.2lf", my_money); // CALL
    return 0;
}

// DEFINITION:
// return_type function_name(INPUT_PARAMETERS)
double php2usd(double php)
{
    return (php / X_PHPUSD);
}
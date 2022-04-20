/*
Bad Practice: No return statement!

If no return statement appears in a function definition,
control automatically returns to the calling function
after the last statement of the called function is
executed. In this case, the return value of the called
function is undefined. If the function has a return type
other than void, it's a serious bug, and the compiler
prints a warning diagnostic message. If the function
has a void return type, this behavior is okay, but may
be considered poor style. Use a plain return statement
to make your intent clear.

https://docs.microsoft.com/en-us/cpp/c-language/return-statement-c?view=msvc-170#:~:text=If%20no%20return%20statement%20appears,the%20called%20function%20is%20undefined. 
*/

#include <stdio.h>
int main()
{
    float peso;

    printf("Enter peso amount: \n");
    scanf("%f", &peso);
    float usDollar = peso * 0.0190950;
    float russianRuble = peso * 1.55291;
    float saudiRiyal = peso * 0.0716063;
    float japaneseYen = peso * 2.43705;

    printf("Conersions\n");
    printf("US Dollars = %0.2f\n", usDollar);
    printf("Russian Ruble = %0.2f\n", russianRuble);
    printf("Saudi Riyal = %0.2f\n", saudiRiyal);
    printf("Japanese Yen = %0.2f\n", japaneseYen);
}
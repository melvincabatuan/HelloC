/*
$ gcc FormatSpecifiers.c -o FormatSpecifiers
PhD:~/HelloC$ ./FormatSpecifiers
The following are all the format specifiers that can be used in printf():
%c The character format specifier.
%d The integer format specifier.
%i The integer format specifier (same as %d).
%f The floating-point format specifier.
%e The scientific notation format specifier (note the lowercase e).
%E The scientific notation format specifier (note the uppercase E).
%g Uses %f or %e, whichever result is shorter.
%G Uses %f or %E, whichever result is shorter.
%o The unsigned octal format specifier.
%s The string format specifier.
%u The unsigned integer format specifier.
%x The unsigned hexadecimal format specifier (note the lowercase x).
%X The unsigned hexadecimal format specifier (note the uppercase X).
%p Displays the corresponding argument that is a pointer.
%n Records the number of characters written so far.
%% Outputs a percent sign (%).
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    printf("The following are all the format specifiers that can be used in printf():\n");
    printf("%%c The character format specifier.\n");
    printf("%%d The integer format specifier.\n");
    printf("%%i The integer format specifier (same as %%d).\n");
    printf("%%f The floating-point format specifier.\n");
    printf("%%e The scientific notation format specifier (note the lowercase e).\n");
    printf("%%E The scientific notation format specifier (note the uppercase E).\n");
    printf("%%g Uses %%f or %%e, whichever result is shorter.\n");
    printf("%%G Uses %%f or %%E, whichever result is shorter.\n");
    printf("%%o The unsigned octal format specifier.\n");
    printf("%%s The string format specifier.\n");
    printf("%%u The unsigned integer format specifier.\n");
    printf("%%x The unsigned hexadecimal format specifier (note the lowercase x).\n");
    printf("%%X The unsigned hexadecimal format specifier (note the uppercase X).\n");
    printf("%%p Displays the corresponding argument that is a pointer.\n");
    printf("%%n Records the number of characters written so far.\n");
    printf("%%%% Outputs a percent sign (%%).\n");

    exit(0);
}

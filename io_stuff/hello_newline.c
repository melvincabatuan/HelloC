/* Note: This is a block comment
This program is just a customary greeting: "Hello World!" with added #include <stdio.h>
demo on escape sequence '\'

Written by: MKC
Date written:
Last modified:
*/

#include <stdio.h> // Pre-processor directive to add the header file

// You may set global variable here
// e.g. int age;

int main() // main() function is the entry point of program run
{
    printf("Hello World!\n");     // output Hello text
    printf("\"Hello\" World!\n"); // output "Hello" text
    printf("'Hello' World!\n");   // output 'Hello' text
    printf("\\Hello\\ World!\n"); // output \Hello\ text
    return 0;                     // int return type set above int main()
}
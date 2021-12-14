#include <stdio.h>
#include <string.h>
#include <limits.h>

char *strsep(char **stringp, const char *delim) {
    char *rv = *stringp;
    if (rv) {
        *stringp += strcspn(*stringp, delim);
        printf("%s", *stringp);
        if (**stringp)
            *(*stringp)++ = '\0';
        else
            *stringp = 0; }
    return rv;
}

int main(){
    printf("%d", INT_MAX);
       printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\n", LONG_MAX);
//     char* buffer ="C492708,33.0,30 to 34,MALE,2020-06-26,2020-06-28,2020-07-02,,,RECOVERED,NO,REPATRIATE,,,,RECOVERED,NO,,";
//     char *line  = buffer;
//     char *field;
//     int index = 0;
//     while ((field = strsep(&line, ",")) != NULL) {
//         printf("element %d = %s\n", index, field);
//         index++;
//    }
    return 0;
}

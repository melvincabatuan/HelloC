#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	printf("\n%d  <= CHAR          <= %d.\n", CHAR_MIN, CHAR_MAX);
	printf("%d    <= SIGNED CHAR   <= %d.\n", SCHAR_MIN, SCHAR_MAX);
	printf("0     <= UNSIGNED CHAR <= %u.\n\n", (unsigned) UCHAR_MAX);

	printf("%d    <= SHORT INT     <= %d.\n", SHRT_MIN, SHRT_MAX);
	printf("%d    <= INT           <= %d.\n", INT_MIN, INT_MAX);
	printf("%d    <= LONG INT      <= %ld.\n\n", LONG_MIN, LONG_MAX);

	printf("0     <= USHORT INT     <= %u.\n", USHRT_MAX);
	printf("0     <= UINT           <= %u.\n", UINT_MAX);
	printf("0     <= ULONG INT      <= %lu.\n", ULONG_MAX);
	system("pause");
	return 0;
}

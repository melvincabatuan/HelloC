#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define n 16

int binary_search(int A[n], int x) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low < high) {
		mid = floor((low + high) / 2.0f);
		if (x > A[mid])
			low = mid + 1;
		else
			high = mid;
	}
	if (A[low] == x)
		return low;
	else
		return -1; //not found
}

int main()
{
	int A[] = { 1,2,3,5,6,7,8,10,12,13,15,16,18,19,20,22 };
	int x = 21;
	printf("The location(index) of %d is %d.", x, binary_search(A,x));
	system("pause");
	return 0;
}

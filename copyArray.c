#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int copyArray(int * a, int * cp , int len) {
 	if (!a || !cp) return -1;
 	int i;
 	for (i = 0; i < len; i++)
 	cp[i] = a[i];
 	return 0;
}


// a unit test of copyArray
 #define N 5

int main() {
 	int a[N], b[N];
 	int i;

	// initialize the source array
	 for (i = 0; i < N; i++) 
		a[i] = i;

	 // should copy a’s elements to b
	copyArray(a, b, N);

 	// check that the copy indeed occurred
 	for (i = 0; i < N; i++)
	{
		assert (a[i] == b[i]);
		printf("a[%d] = %d == b[%d] = %d \n",i,a[i],i,b[i]);
	}
	 // check corner cases
	assert (copyArray(NULL , a, 0));
	assert (copyArray(a, NULL , 0));
	return 0;
}

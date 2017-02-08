#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n[] = { 1, 2, 3, 4, 5 };
	int k = 0;
	for (int i = 1; i <= n[0]; ++i) {
		for (int i = 1; i <= n[1]; ++i) {
			for (int i = 1; i <= n[2]; ++i) {
				for (int i = 1; i <= n[3]; ++i) {
					for (int i = 1; i <= n[4]; ++i)
						k = k + 1;  // k++
				}
			}
		}	 
		
	}

	printf("The final value of k = %d\n", k);
	system("pause");
	return 0;
}

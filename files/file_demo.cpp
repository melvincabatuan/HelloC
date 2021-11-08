#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("output.txt", "w");
	fprintf(fp, "%s","My text here!");
	fclose(fp);
	return 0;
}

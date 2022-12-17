#include<stdio.h>
#include<stdlib.h>
#define M 80
int main(void)
{
	FILE* fptr;
	char c, st[M];
	int b;
	fptr = fopen("output.txt", "r");

	while (!feof(fptr)) {
		b = fread(st, sizeof(c), M - 1, fptr);
		st[b]='\0';
		printf("%s\n", st);
	}
	fclose(fptr);
	system("pause");
	return 0;
}
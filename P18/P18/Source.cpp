#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
	FILE* in ,*out;
	char st[100];
	int c;
	in = fopen("welcome.txt", "r");
	out = fopen("output.txt", "w");
	while (!feof(in)) {
		c = fscanf(in, "%s", st);
		if (c > 0)
			fprintf(out, "%s\n", st);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
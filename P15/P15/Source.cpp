#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE* fptr1,*fptr2;
	char c;
	fptr1 = fopen("welcome.txt", "r");
	fptr2 = fopen("output.txt", "w");
	if (fptr1 != NULL && fptr2!=NULL)
	{
		while ((c = getc(fptr1)) != EOF)
			putc(c,fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}
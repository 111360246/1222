#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE* fptr;
	char c;
	int cou = 0;
	fptr = fopen("welcome.txt","r");
	if (fptr != NULL)
	{
		while ((c = getc(fptr)) != EOF)
		{
			printf("%c", c);
			cou++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", cou);
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}
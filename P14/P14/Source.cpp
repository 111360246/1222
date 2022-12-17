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
		printf("\n總共有%d個字元\n", cou);
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define E 13
#define M 80
int main(void)
{
	FILE* fptr;
	char c,st[M];
	int i = 0;
	fptr = fopen("output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	
	while ((c = getche()) != E && i<M)
		st[i++] = c;
	putc('\n', fptr);
	fwrite(st, sizeof(c), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
}
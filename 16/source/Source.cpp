#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80

int main() {
	FILE* fptr;
	char str[MAX], ch;
	int i = 0;
	fopen_s(&fptr, "output.txt", "a");
	printf("輸入字串，按enter結束：\n");
	while ((ch = getche()) != ENTER && i < MAX) str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成");

}
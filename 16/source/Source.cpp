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
	printf("��J�r��A��enter�����G\n");
	while ((ch = getche()) != ENTER && i < MAX) str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����");

}
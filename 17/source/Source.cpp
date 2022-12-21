#include<stdio.h>
#include<stdlib.h>
#define Max 80

int main() {
	FILE* fptr;
	char str[Max] = "";
	int bytes;
	fopen_s(&fptr, "output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), Max-1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
}
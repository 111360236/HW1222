#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE* in, *out;
	char str[100];
	int cnt;
	fopen_s(&in, "welcome.txt", "r");
	fopen_s(&out, "output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0) fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	return 0;
}
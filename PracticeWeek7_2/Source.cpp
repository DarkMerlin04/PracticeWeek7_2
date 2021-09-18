#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%s", str);
	int a = strlen(str);
	printf("%c" ,str[a - 1]);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	printf("starting now:\n");
	one_three();
	return 0;
}

int one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

int two()
{
	printf("two\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age = 0, day = 0;
	scanf("%d\n", &age);
	day = age * 365;
	printf("your age is %d,now you have pasted %d days\n\n",age,day);
	return 0;
}
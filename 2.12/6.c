#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()//Before Modification
//{
//	int toes = 10, a, b;
//	a = 2 * toes;
//	b = toes*toes;
//	printf("toes is %d,twice toes is %d,toes squard is %d\n\n", toes, a, b);
//	return 0;
//}

int main()//after modification
{
	int toes = 10;
	printf("toes is %d,twice toes is %d,toes squard is %d\n\n", toes, toes * 2, toes * toes);
	return 0;
}
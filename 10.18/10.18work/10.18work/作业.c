#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//����
	printf("������������������С��һ���������");
	scanf("%d %d", &a, &b);
	
	//����
	int num1 = a / b;
	int num2 = a % b;

	//������
	printf("%d %d\n", num1, num2);

	return 0;
}
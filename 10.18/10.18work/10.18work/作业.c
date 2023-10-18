#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//输入
	printf("请输入两个大于零切小于一万的整数：");
	scanf("%d %d", &a, &b);
	
	//计算
	int num1 = a / b;
	int num2 = a % b;

	//输出结果
	printf("%d %d\n", num1, num2);

	return 0;
}
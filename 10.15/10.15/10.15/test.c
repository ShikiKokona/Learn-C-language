#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//sizeof是操作符，是单目操作符
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//类型必须加括号
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//计算数组第一个的大小
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 数组的元素个数
//	return 0;
//}


int main()
{
	//int a = 10;
	//int b = a++;//后置++，先使用，后++
	//printf("%d\n", b);
	//printf("%d\n", a);

	//int c = 10;
	//int d = ++c;//前置++，先++，后使用
	//printf("%d\n", c);
	//printf("%d\n", d);

//三目表达式
	//int a = 10;
	//int b = 20;
	//int c = a > b ? a : b;
	//printf("%d\n", c);

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左到右依次计算，整个表达式的结果是最后一个表达式的结果
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);
	//       c=8        a=28       c=5
	printf("%d\n", d);
	return 0;
}
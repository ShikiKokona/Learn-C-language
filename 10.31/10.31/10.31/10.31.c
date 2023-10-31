#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>



//60秒关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60秒后关机，输入“我测”取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"我测") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("真的心甘情愿的被关机吗？再输一次吧");
//		goto again;
//	}
//
//	return 0;
//}



//替换字符串中的字符
//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr + 6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}



////比较最大值
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求最大值
//	int max = Max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}



//交换两个整型变量的内容

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
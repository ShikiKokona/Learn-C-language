#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	//int ch = getchar();//getchar()获取一个字符
//	//printf("%c\n", ch);
//	//putchar(ch);//putchar()打印字符
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int pwd[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%d", pwd);
//	int ch = getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码Y/N：");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof(arr) - 计算数组的总大小
//	//sizeof(arr[0]) - 计算数组内元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i <= sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//  //输入
//	scanf("%4d%2d%2d", &year, &month, &day);
//  //输出
//	printf("year=%d\nmonth=%.2d\nday=%.2d", year, month, day);
//
//	return 0;
//}


//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//
//	return 0;
//}


//int main()
//{
//	int n = printf("Hello World!");
//	printf("\n%d\n", n);
//
//	return 0;
//}


//int sum(int x)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return x + b + c;
//}
//
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", sum(a));
//	}
//}


//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;");
//
//	return 0;
//}


//int main()
//{
//	//int arr[4] = { 0 };
//	//int i;
//	////遍历数组输入4个整数
//	//for (i = 0; i < 4; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//
//	////遍历数组判断出最大的数
//	//int max = arr[0];
//	//int i = 1;
//	//while (i < 4)
//	//{
//	//	if (max < arr[i])
//	//	{
//	//		max = arr[i];
//	//	}
//	//	i++;
//	//}
//
//	////输出
//	//printf("%d\n", max);
//
//	//更简洁的方法
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	//假设第一个元素就是最大值
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


int main()
{
	float r = 0.0f;
	float v = 0.0f;
	scanf("%f", &r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;

	printf("%.3lf\n", v);

	return 0;
}
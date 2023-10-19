#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	switch (a)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{//switch可以嵌套使用
//		case 1: n++;
//		case 2: m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//打印1~10

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			//break;break直接结束循环
			continue;
		printf("%d\n", i);
		i++;
	}

	return 0;
}
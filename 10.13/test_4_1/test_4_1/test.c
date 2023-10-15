#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗（输入0或1）\n");
//	scanf("%d", &input);
//	if (input = 1)
//	{
//		printf("拿到好offer\n");
//	}
//	else
//	{
//		printf("卖地瓜\n");
//	}
//	return 0;
//}



//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("写了%d行代码\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("不要小看我与C酱的羁绊啊!!!\n");
//	}
//}



//add(x, y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right  = sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//延迟执行
//		Sleep(500);
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//
//	return 0;
//}


//编写代码实现模拟用户登录，并且只能登陆三次。
//只允许输入三次密码，正确则提示登陆成功，否则退出程序。

int main()
{
	int i = 0;
	char pwd[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", pwd);
		//比较2个字符串是否相等，不能用 ==，而应该用一个库函数：strcmp
		//如果返回值为0，表示2个字符串相等
		if (strcmp(pwd, "admin") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误，请重新输入\n");
	}
	if (i == 3)
		printf("密码错误三次，程序结束\n");

	return 0;
}
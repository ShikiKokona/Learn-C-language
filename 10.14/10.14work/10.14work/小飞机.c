#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("    **\n");
//	printf("    **\n");
//	printf("**********\n");
//	printf("**********\n");
//	printf("   *  *\n");
//	printf("   *  *\n");
//
//	return 0;
//}


//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("--------------------\n");
//	printf("Jack    18     Man");
//
//  return 0;
//}


//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 40, c = 212;
//	int sum = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	char arr[4] = { 'b','i','t' };
//	//不完全初始化，剩余部分默认初始化为0
//	printf("%d\n",strlen(arr));
//
//	return 0;
//}


//sum(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int r =sum(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}


int main()
{
	int x, y = 0;
	scanf("%d", &x);
	if (x > 0)
	{
		y = -1;
	}
	else if (x == 0)
	{
		y = 0;
	}
	else 
	{
		y = 1;
	}
	printf("%d", y);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int a = 0;
//	uint b = 0;
//
//	return 0;
//}

//static
//1. �޸ľֲ�����
//2. �޸�ȫ�ֱ���
//3. �޸ĺ���


//1. static �޸ľֲ�����
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//2. static����ȫ�ֱ���

//�����ⲿ����

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//3. static�޸ĺ���

//extern int add(int a1, int b1);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a,b);
//	printf("%d\n", c);
//}


//define�����ʶ������
#define NUM 100

//define�����
#define ADD(x,y) x+y

int main()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };
	printf("%d\n", arr[1]);

	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);
}
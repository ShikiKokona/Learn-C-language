#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>



//60��ػ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���60���ػ������롰�Ҳ⡱ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"�Ҳ�") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("����ĸ���Ը�ı��ػ�������һ�ΰ�");
//		goto again;
//	}
//
//	return 0;
//}



//�滻�ַ����е��ַ�
//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr + 6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}



////�Ƚ����ֵ
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
//	//�����ֵ
//	int max = Max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}



//�����������ͱ���������

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
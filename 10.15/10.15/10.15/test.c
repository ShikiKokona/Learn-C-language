#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//sizeof�ǲ��������ǵ�Ŀ������
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//���ͱ��������
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//���������һ���Ĵ�С
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 �����Ԫ�ظ���
//	return 0;
//}


int main()
{
	//int a = 10;
	//int b = a++;//����++����ʹ�ã���++
	//printf("%d\n", b);
	//printf("%d\n", a);

	//int c = 10;
	//int d = ++c;//ǰ��++����++����ʹ��
	//printf("%d\n", c);
	//printf("%d\n", d);

//��Ŀ���ʽ
	//int a = 10;
	//int b = 20;
	//int c = a > b ? a : b;
	//printf("%d\n", c);

//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص��ǣ����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);
	//       c=8        a=28       c=5
	printf("%d\n", d);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	//int ch = getchar();//getchar()��ȡһ���ַ�
//	//printf("%c\n", ch);
//	//putchar(ch);//putchar()��ӡ�ַ�
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
//	printf("���������룺");
//	scanf("%d", pwd);
//	int ch = getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������Y/N��");
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
//	//sizeof(arr) - ����������ܴ�С
//	//sizeof(arr[0]) - ����������Ԫ�صĴ�С
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
//  //����
//	scanf("%4d%2d%2d", &year, &month, &day);
//  //���
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
//	//����
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//���
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
//	////������������4������
//	//for (i = 0; i < 4; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//
//	////���������жϳ�������
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
//	////���
//	//printf("%d\n", max);
//
//	//�����ķ���
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	//�����һ��Ԫ�ؾ������ֵ
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
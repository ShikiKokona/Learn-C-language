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
//		//�ӳ�ִ��
//		Sleep(500);
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//
//	return 0;
//}


//��д����ʵ��ģ���û���¼������ֻ�ܵ�½���Ρ�
//ֻ���������������룬��ȷ����ʾ��½�ɹ��������˳�����

int main()
{
	int i = 0;
	char pwd[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", pwd);
		//�Ƚ�2���ַ����Ƿ���ȣ������� ==����Ӧ����һ���⺯����strcmp
		//�������ֵΪ0����ʾ2���ַ������
		if (strcmp(pwd, "admin") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�����������������\n");
	}
	if (i == 3)
		printf("����������Σ��������\n");

	return 0;
}
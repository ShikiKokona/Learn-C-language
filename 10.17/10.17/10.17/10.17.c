#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 10;//���ڴ�����4���ֽڣ��洢10
	//&a;//ȥ��ַ������
	printf("%p\n", &a);
	int* p = &a;
	//p����ָ�����
	//int˵��pָ��Ķ�����int����  *˵��p��ָ�����
	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ�ҵ�p��ָ��Ķ���*p����pָ��Ķ���
	printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;

	return 0;
}
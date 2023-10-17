#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 10;//向内存申请4个字节，存储10
	//&a;//去地址操作符
	printf("%p\n", &a);
	int* p = &a;
	//p就是指针变量
	//int说明p指向的对象是int类型  *说明p是指针变量
	*p = 20;//解引用操作符，意思就是通过p中存放的地址找到p所指向的对象，*p就是p指向的对象
	printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;

	return 0;
}
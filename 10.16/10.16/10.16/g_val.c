#define _CRT_SECURE_NO_WARNINGS

//全局变量
int g_val = 2023;

//static int g_val = 2023;
//static修饰全局变量后全局变量的外部连接属性会变成内部连接属性
//其它源文件(.c文件)无法使用

//修改函数
int add(int a1, int b1)
{
	return a1 + b1;
}

//static int add(int a1, int b1)
//与修改全局变量类似
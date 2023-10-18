#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//学生
//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)//这里的struct Stu*就是一个定义类型，类似int、ps是指针
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->   结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "Shiki Kokona",17,"女","12654813579" };//struct Stu为定义类型
//	
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//
//	print(&s);
//
//	return 0;
//}


//if语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 35)
//		printf("青年\n");
//	else if (age >= 35 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else if (age >= 100 && age < 140)
//		printf("老登\n");
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	//不规范的写法
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d" ,&a);
//	if (a % 2 == 1)
//		printf("是奇数");
//	else
//		printf("不是奇数");
//}


int main()
{
	int i = 1;
	while (i<=100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	i++;

	return 0;
}
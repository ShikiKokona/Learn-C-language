#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)//�����struct Stu*����һ���������ͣ�����int��ps��ָ��
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->   �ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "Shiki Kokona",17,"Ů","12654813579" };//struct StuΪ��������
//	
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//
//	print(&s);
//
//	return 0;
//}


//if���
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 35)
//		printf("����\n");
//	else if (age >= 35 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else if (age >= 100 && age < 140)
//		printf("�ϵ�\n");
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	//���淶��д��
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
//		printf("������");
//	else
//		printf("��������");
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
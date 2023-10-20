#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <Mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define scale	1	
#define pic 839

#if	scale==1

#define element 194 * 54
char folder[10] = "ASC";

#else

#define element 124 * 40
char folder[10] = "ASC_small";

#endif 

void gotoxy(int x, int y);
void HideCursor();
void modeset(int w,int h);

char ptr[element + 5];
char name[50];

int main()
{
	if (scale == 1)
	{
		modeset(200, 55);//设置窗口大小 
	}
	else
	{
		modeset(130, 45);//设置窗口大小 
	}
	
	FILE* fp;
	HideCursor();//隐藏光标 
	mciSendString("open loli.mp3", NULL, 0, NULL);
	mciSendString("play loli.mp3", NULL, 0, NULL);
	Sleep(300);
	
	for (int i = 1; i <= pic; i++)
	{
		sprintf(name, "./%s/ASCII-%d.txt", folder, i);
		fp = fopen(name, "r");
		fread(ptr, 1, element, fp);
		printf("%s", ptr);
		fclose(fp);
		gotoxy(0, 0);
		Sleep(38);
	}
	return 0;
}

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO curInfo; //定义光标信息的结构体变量
	curInfo.dwSize = 1;  //如果没赋值的话，隐藏光标无效
	curInfo.bVisible = FALSE; //将光标设置为不可见
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取控制台句柄
	SetConsoleCursorInfo(handle, &curInfo); //设置光标信息
}

void modeset(int w,int h) {
//	此函数设置窗口大小为 w*h
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD size = {w*2, h*2};
	SetConsoleScreenBufferSize(hOut,size);
	SMALL_RECT rc = {1,1, w, h};
	SetConsoleWindowInfo(hOut ,true ,&rc);
	system("cls");
	return;
}


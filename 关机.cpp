#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");//sysytem(),为系统执行命令shutdown -s,为关机命令
	again:
	printf("注意，你的电脑将在一分钟后关机，如果输入：“我是猪”，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//strcmp()为比较字符函数，在string.h文件中
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
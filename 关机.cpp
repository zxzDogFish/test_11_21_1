#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");//sysytem(),Ϊϵͳִ������shutdown -s,Ϊ�ػ�����
	again:
	printf("ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺������������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//strcmp()Ϊ�Ƚ��ַ���������string.h�ļ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
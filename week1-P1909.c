#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int inone(int a, int b);//�����������һ
int max(int a, int b,int c);
int main()
{
	int n;
	//printf("������С���ѵ�������");
	scanf("%d", &n);
	int m[3][2];
	int all[3];
	for (int i = 0; i < 3; i++)
	{
		//printf("�������%d�ְ�װ��Ǧ�������Ͱ�װ�ļ۸�", i + 1);
		scanf("%d %d", &m[i][0], &m[i][1]);
		all[i] = inone(n, m[i][0]) * m[i][1];
	}
	//printf("���ٻ���%dԪǮ", max(all[0], all[1], all[2]));
	printf("%d", max(all[0], all[1], all[2]));
}
int inone(int a,int b)
{
	if (a % b == 0) 
	{
		return a / b;
	}
	else
	{
		return a / b + 1;
	}
}
int max(int a,int b,int c)
{
	if (a<= b)//�Ż�һ������ֵ�ĺ���
	{
		if (a<= c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if (b <= c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}

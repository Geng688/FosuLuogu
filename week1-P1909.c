#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int inone(int a, int b);//若有余数则进一
int max(int a, int b,int c);
int main()
{
	int n;
	//printf("请输入小朋友的数量：");
	scanf("%d", &n);
	int m[3][2];
	int all[3];
	for (int i = 0; i < 3; i++)
	{
		//printf("请输入第%d种包装的铅笔数量和包装的价格：", i + 1);
		scanf("%d %d", &m[i][0], &m[i][1]);
		all[i] = inone(n, m[i][0]) * m[i][1];
	}
	//printf("至少花费%d元钱", max(all[0], all[1], all[2]));
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
	if (a<= b)//优化一个求最值的函数
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

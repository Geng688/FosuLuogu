#include<stdio.h>
int main()//线性遍历，多就补给下一位，少就下一位补上来
{
	int n, a[105],aver=0,count=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		aver += a[i];
	}
	aver /= n;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] > aver)
		{
			a[i + 1] += a[i] - aver;
			count++;
		}
		else if (a[i] < aver)
		{
			a[i + 1] -= aver - a[i];
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

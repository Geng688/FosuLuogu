#include<stdio.h>

int main()
{
	int n, a[100000], t,k,dist, count = 0;
	scanf("%d%d", &n, &dist);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++)//冒泡排序
	{
		for (int j = 1; j <= n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 2; i <= n-1; i++)
	{
			if (a[i-1]!=0&&(a[i + 1] - a[i - 1] + 1 <= dist))//后面的不会为0
			{
				a[i] = 0;
				count++;
			}
			else//搜索到不为0
			{
				k = i - 1;
				while (a[k] == 0)
				{
					k--;
				}
				if (a[i + 1] - a[k] + 1 <= dist)
				{
					a[i] = 0;
					count++;
				}
			}
	}
	printf("%d", count);
	return 0;

	
}

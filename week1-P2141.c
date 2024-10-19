#include<stdio.h>
int main()
{
	int a[100],b[100],n,count=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];//要去重就得抹零，抹零就会改变原数组，因此复制一个数组
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (b[k] == a[i] + a[j])
				{
					count++;
					b[k] = 0;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}

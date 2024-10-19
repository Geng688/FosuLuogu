#include<stdio.h>
int main()
{
	int n, a[100000],l,r,count=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1)
		{
			l = i;
			break;
		}
		if (a[i] == 0)
			count++;
	}
	for (int i = n; i >= 1; i--)
	{
		if (a[i] == 1)
		{
			r = i;
			break;
		}
	}
	if (count == n)
		printf("0");
	else
		printf("%d", r - l + 1);//要排除全为0的情况
	return 0;
}

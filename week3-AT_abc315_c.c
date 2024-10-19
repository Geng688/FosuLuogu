#include<stdio.h>
int main()
{
	int n, ans = 0, maxf, maxs=0, a[300000][2],x;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);
		if (a[i][1] > maxs)
		{
			maxs = a[i][1];
			maxf = a[i][0];
			x = i;
		}
	}
	int maxf1, maxs1=0,y;
	for (int i = 1; i <= n; i++)
	{
	    if (i == x)
			continue;
		if (a[i][0] == maxf)
			a[i][1] /= 2;
		if (a[i][1] > maxs1)
		{
			maxs1 = a[i][1];
			maxf1 = a[i][0];
			y = i;
		}
	}
	printf("%d", a[x][1] + a[y][1]);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,max=0, a[1010][1010], b[1010][1010],s[1010][1010];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
			s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1]+a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == 0)
				b[i][j] = (s[i][n] - s[i - 1][n] - s[i][0] + s[i - 1][0]) + (s[n][j] - s[0][i] - s[n][j - 1] + s[0][j - 1]);
			if (b[i][j] > max)
				max = b[i][j];
		}
	}
	printf("%d", max);
	return 0;
}

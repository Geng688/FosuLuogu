#include<stdio.h>
int main()
{
    int n, m, k, x;
    int mark[1010][1010];
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; i++)//遍历n个人
	{
		for (int j = 1; j <= m; j++)//遍历m套题
		{
			scanf("%d",&x);
			mark[x][j] = 1;//第x天要安排第j套题，标记为1
		}
	}
	for (int i = 1; i <= k; i++)
	{
        int b=0;
		for (int j = 1; j <= m; j++)
		{
			b+= mark[i][j];
		}
		printf("%d ",b);
	}
	return 0;
}

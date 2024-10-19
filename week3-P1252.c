#include<stdio.h>

int main()
{
    int a[5][11], b[5][11], last[5] = { 1,1,1,1,1 } ;
    int min, mark, x=0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j] - a[i][j - 1];
		}
	}
	for (int i = 0; i < 20; i++)
	{
		min = 2000000000;
		for (int j = 0; j < 5; j++)
		{
			if (b[j][last[j] + 1] < min && last[j] + 1 <= 10)
			{
				mark = j;
				min = b[j][last[j] + 1];
			}
		}
		last[mark]++;
	}
	for (int i = 0; i < 5; i++)
	{
		x += a[i][last[i]];
	}
	printf("%d\n%d %d %d %d %d\n", x, last[0], last[1], last[2], last[3], last[4]);
	return 0;
}

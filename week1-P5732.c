#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[20][21];
	a[0][0] = 1;
	printf("1\n");
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i ; j++)
		{
			if (j == 0||j==i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			printf("%d ", a[i][j]);
			
		}
		printf("\n");
		
	}
	return 0;
}

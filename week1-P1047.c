#include<stdio.h>
int main()
{
	int l[10001],m,u,v,lo,count=0;
	scanf("%d %d", &lo, &m);
	for (int i = 0; i <= lo; i++)
	{
		l[i] = 1;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d",&u,&v);
		for (int j = u; j <= v; j++)
		{
			if (l[j] == 1)
			{
				l[j] = 0;
				count++;
			}		
		}
	}
	printf("%d", lo+1 - count);
	return 0;
}

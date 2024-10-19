#include<stdio.h>
int main()
{
	int a, b, count;
	count = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		int j = i;
		while (j)
		{
			if (j % 10 == 2)
				count++;
			j = j / 10;
		}
	}
	printf("%d", count);
	return 0;
}

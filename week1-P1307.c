#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int j=0;
	while(x)
	{
		j = (j + (x % 10)) * 10;
		x /= 10;
	}
	printf("%d", j/10);
	return 0;
}

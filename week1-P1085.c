#include<stdio.h>
int main()
{
	int a, b, sum, max,day,i;
	max = 0;
	for ( i = 1; i < 8; i++)
	{
		scanf("%d %d",&a,&b);
		sum = a + b;
		if (sum > 8 && sum > max)
		{
			max = sum;
			day = i;
		}
		
	}
	printf("%d", day);
    return 0;
}

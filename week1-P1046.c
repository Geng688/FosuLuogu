#include<stdio.h>
int main()
{
	int tall[10],hand,count=0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d ", &tall[i]);
	}
	scanf("%d",&hand);
	for (int i = 0; i < 10; i++)
	{
		if (hand+30>=tall[i])
			count++;
	}
	printf("%d", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int h=1, w;
	scanf("%d",&w);
	while (w > h)//循环，得出层数（高度）
	{
		w -= h;
		h++;
	}
	if (h % 2 == 0)//如果是偶数层，分子递增，分母递减，得出答案
	{
		printf("%d/%d",w,h+1-w);
	}
	else//如果是奇数层，分子递减，分母递增，得出答案
	{
		printf("%d/%d",h+1-w,w);
	}
}

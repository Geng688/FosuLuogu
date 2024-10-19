#include<stdio.h>
int main()//1.在范围内枚举；2.先枚举在定范围
{
	int a, b,c,d,count=0;
	int date[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//29号的2月回文后恰好是闰年；28号的2月回文完不是平年
	scanf("%d%d", &a, &b);
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < date[i]; j++)
		{
			c = ((j+1) % 10) * 1000 + ((j+1) / 10) * 100 + ((i+1) % 10) * 10 + ((i+1)/10);
			d = c * 10000 + (i+1) * 100 + (j+1);
			if (d >= a && d <= b)
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}

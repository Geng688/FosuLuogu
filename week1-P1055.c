#include<stdio.h>
int main()
{
	char a[13], mod[12] = "0123456789X";
	for (int i = 0; i < 13; i++)
	{
		scanf("%c", &a[i]);
	}
	int b=0,j=1;
	for (int i = 0; i < 12; i++)
	{
		if (a[i] == '-')continue;
			b += (a[i] - '0') * j;
			j++;
	}
	if (mod[b%11] == a[12])
	{
		printf("Right");
	}
	else
	{
		for(int i=0;i<12;i++)
		printf("%c",a[i]);
		printf("%c", mod[b%11]);
	}
	return 0;
}

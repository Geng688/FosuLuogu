#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int Month[12];
	for (int i = 0; i < 12; i++)
	{
		scanf("%d", &Month[i]);//获取12个月的预算
	}
	int hand=300;
	int save = 0;
	for (int j = 0; j < 12; j++)
	{
		int more = hand - Month[j];
		if (more >= 100)
		{
			save =save+(more - more%100);//更新储蓄
			hand= 300+more % 100;//更新下个月手头的钱
		}
		else if(more >= 0)
		{
			hand= 300 + more;//更新下个月手头的钱
		}
		else
		{
			printf("-%d", j+1);
			return 0;
		}
	}
	hand =int( hand + save * 1.2-300);
	printf("%d", hand);
	
}

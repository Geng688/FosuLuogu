#include<stdio.h>
int main()
{
	long long n, x,eat=0,all=0, a[100010];
	scanf("%lld%lld", &n, &x);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
		if (a[i] + a[i - 1] > x)
		{
			eat= a[i] + a[i - 1] - x;
			a[i] -= eat;
			all += eat;
		}
	}
	printf("%lld", all);
	return 0;
}

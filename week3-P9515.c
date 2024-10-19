#include<stdio.h>
long long re()
{
	long long x = 0, f = 1;
	char ch;
	ch = getchar();
	while (ch < '0' || ch>'9')
	{
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
int main()
{
	long long n, t, f;
	scanf("%lld%lld%lld", &n, &t, &f);
	long long wait = t - f;
	long long x, a;
	int ans=0;
	for (int i = 0; i < n; i++)
	{
		x = re();
		a = re();
		if (a <= wait+x)//从躺平开始到到达x的时间要比开放时间大
			ans++;
	}
	printf("%d", ans);
	return 0;
}

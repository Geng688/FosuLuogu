#include<stdio.h>
int main()
{
	int n, m, a[3005], s[3005], min = 100000;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	for (int i = 1; i <= n - m + 1; i++)
	{
		if (s[i + m - 1] - s[i - 1] < min)
			min = s[i + m - 1] - s[i - 1];
	}
	printf("%d", min);
	return 0;
}

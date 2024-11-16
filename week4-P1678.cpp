#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
using namespace std;//名字空间
int main()
{
	long long m, n, a[100100], b[100100];//只wa一个点，说明得开longlong，或者没考虑所有情况，或者数组开小了
	int l, r;//编号int,数值longlong
	long long la, ra, ans = 0;
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &b[i]);
	}
	sort(a + 1, a + m + 1);//从数组a[1]排到a[m]
	for (int i = 1; i <= n; i++)
	{
		l = 1;//二分查找
		r = m;
		while (l < r)
		{
			int mid = (l+r) / 2;
			if (a[mid] >= b[i])r = mid;
			else l = mid + 1;
		}
		if (b[i] <= a[1])ans += a[1] - b[i];//特别判断如果待查数b比a中最小的还小
		else//对比b[i]与mid(即l-1)和与mid+1（即l）的距离最小值
		{
			if (a[l - 1] >= b[i])la = a[l - 1] - b[i];
			else la = b[i] - a[l - 1];//与mid的距离

			if (a[l] >= b[i])ra = a[l] - b[i];
			else ra = b[i] - a[l];//与mid+1的距离

			if (la >= ra)ans += ra;
			else ans += la;
		}
	}
	printf("%lld", ans);
	return 0;
}

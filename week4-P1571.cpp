#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
using namespace std;//名字空间
int main()
{
	int n, m;
	long long a[100000], b[100000];
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		scanf("%lld",&b[i]);
	}
	sort(b + 1, b + m + 1);
	for (int i = 1; i <= n; i++)
	{
		int left = 1;
		int right = m;
		while (left < right)
		{
			int mid = (left + right) / 2;
			if (b[mid] < a[i])left = mid + 1;
			else right = mid;
		}
		if (b[left] == a[i])printf("%lld ", a[i]);
	}
	return 0;
}

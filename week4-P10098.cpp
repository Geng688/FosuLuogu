#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
int n;
long long p;
long long z[102];
int a[102];
int b[102];
bool check(long long x)
{
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (x <= z[i])sum += a[i] * x;
		else sum += a[i] * z[i] + b[i] * (x - z[i]);
	}
	if (sum >= p)return true;
	else return false;
}
int main() {
	scanf("%d%lld", &n, &p);
	for (int i = 1; i <= n; i++) scanf("%lld%d%d", &z[i], &a[i], &b[i]);
	long long  l = 1, r = 10e12;
	while (l < r) {//二分
		long long mid = (l + r) / 2;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}
	printf("%lld", l);
	return 0;
}

#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
using namespace std;//名字空间
long long n;
bool check(long long x)
{
	long long sum=x;
	while (x / 3 > 0)
	{
		sum += x / 3;
		x = x - (3 - 1) *( x / 3);
	}
	if (sum >= n)return true;
	else return false;
}
int main()
{

	scanf("%d", &n);
	long long l = 0,r=n;
	while (l < r)
	{
		long long mid = (l + r) / 2;
		if (check(mid))r = mid;
		else l = mid + 1;
	}
	printf("%lld", l);
	return 0;
}

#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
using namespace std;//名字空间
int n, m;
long long a[100010];//数值太大用long long
bool check(long long x)//布尔类型的判断函数
{
	int start = 1, set = 1;
	for (int i = 1; i <= n; i++)//循环n遍，每次判断间隔距离（因为求“最值的最值”的对象是间隔距离）
	{
		if (x <= a[i] - a[start]) {//如果间隔距离超过了待判断数，就重置起点（用来算下一段距离）
			start = i;
			set++;//放一只奶牛
		}
	}
	if (set >= m)return true;//如果可以放的奶牛数比需要放的奶牛数大，那么这个间隔距离可取
	else return false;
}
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + n + 1);//记得排序
	long long l = 1, r = a[n] - a[1];//间隔距离最小1，最大是a[n] - a[1]
	while (l < r)
	{
		long long mid = (l + r + 1) / 2;
		if (check(mid))l = mid;//二分查找，往最大方向（即右方向靠）
		else r = mid - 1;
	}
	printf("%lld", l);//输出查找结果
	return 0;
}

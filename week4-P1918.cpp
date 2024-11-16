#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
using namespace std;//名字空间
struct bowl//定义结构体数组将各位置保龄球数与原位置编号绑定，防止因排序而无法使用原位置编号
{
	int loca;
	int num;
}a[100100];
bool cmp(bowl x, bowl y) {
	return x.num < y.num;
}
int find(int m, int n)
{
	int left = 1;
	int right = n;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (a[mid].num >= m)right = mid;
		else left = mid + 1;
	}
	if (a[left].num == m) return a[left].loca;
	else return 0;
}
int main()
{
	int n, m, Q;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i].num);
		a[i].loca = i;
	}
	sort(a + 1, a + n + 1, cmp);
	scanf("%d", &Q);
	for (int i = 1; i <= Q; i++)
	{
		scanf("%d", &m);
		printf("%d\n", find(m, n));
	}
	return 0;
}

#include<stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>//头文件
using namespace std;//名字空间
int n, k;
int h[100002];
int w[100002];

bool check(int x) {//判断是否大于等于 k
	int s = 0;
	for (int i = 1; i <= n; i++) s += (h[i] / x) * (w[i] / x);//每一大块可以切几小块边长为x的巧克力
	if (s >= k) return true;
	else return false;
}

int main() {
	scanf("%d%d",&n,&k );
	for (int i = 1; i <= n; i++) scanf("%d%d", &h[i], &w[i]);
	int l = 1, r = 100002;
	while (l < r) {//二分
		int mid = (l + r + 1) / 2;//求最大+1
		if (check(mid)) l = mid;//查找尽可能最大的边长
		else r = mid - 1;
	}
	printf("%d", l);
	return 0;
}

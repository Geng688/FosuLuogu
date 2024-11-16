#include<stdio.h>
int n,m,q,a[1000005];

int search(int x) //二分查找 
{
	int l=0,r=n-1;
	while (l<r)
	{
		int mid=l+(r-l)/2;
		if (a[mid]>=x) r=mid;
		else l=mid+1;
	}
	
	if (a[l]==x) return l; //找都了就输出他的位置 
	else return -2; // 没找到输出-1 
}


int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &q);
		int ans = search(q)+1;
		printf("%d ", ans);
	}
	return 0;
}

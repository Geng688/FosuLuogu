#include<iostream>
#include<deque>
using namespace std;
int k, n;
int a[1000010];
int i;
struct node
{
	int num, ref;
};
deque<node>q;
int main()
{
	cin >> n >> k;
	for (i = 1; i <= n; i++)cin >> a[i];
	for (i = 1; i <= n; i++)
	{
		if (!q.empty() && q.front().ref < i - k + 1)q.pop_front();
		while (!q.empty() && a[i] > q.back().num)
		{
			q.pop_back();
		}
		q.push_back({ a[i],i });
		if (i >= k)cout << q.front().num << endl;
	}
	return 0;
}
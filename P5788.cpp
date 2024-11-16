#include <iostream>
#include<algorithm>
#include<stack>
#define ll long long
using namespace std;
const ll N = 3000010;
ll a[N], f[N];
ll n;
stack<ll>s;//用来存下标
int main()
{
	cin >> n;
	a[n] = -1;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++)
	{
		while ((!s.empty()) && a[i] > a[s.top()])
		{
			f[s.top()] = i;
			s.pop();
		}
		s.push(i);
	}
	for (ll i = 0; i < n; i++)
	{
		if (f[i] != 0)
			cout << f[i] + 1 << " ";//加1的原因是我们的下标从0开始，而题目的下标从1开始
		if (f[i] == 0)cout << f[i] << " ";//注意输出空格，否则全Wa
	}
	return 0;
}
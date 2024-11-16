#include <iostream>
#include<algorithm>
#include<queue>
#define ll long long
using namespace std;
priority_queue<ll, vector<ll>, greater<ll>>q;
ll n, x;
int op;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> op;
		if (op == 1) 
		{
			cin >> x;
			q.push(x);
		}
		if (op == 2)
		{
			cout << q.top() << endl;
		}
		if (op == 3&&!q.empty())
		{
			q.pop();
		}
	}
	return 0;
}
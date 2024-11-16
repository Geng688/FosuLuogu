#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>>q;
int n,x,energy=0;
int temp1, temp2,add;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		q.push(x);
	}
	while (q.size()!=1)
	{
		temp1 = q.top();
		q.pop();
		temp2 = q.top();
		q.pop();
		add = temp1 + temp2;
		q.push(add);
		energy += add;
	}
	cout << energy;
}
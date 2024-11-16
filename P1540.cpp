#include<iostream>
#include<queue>
using namespace std;
queue<int>q;
int main()
{
	int m, n,flag=0,count=0;
	int a,t;
	int fro;
	int mark[10000];//每种数字对应的标记数组，该数字在队列内记为1，否则为0
	cin >> m >> n;
	while (n--)
	{
		cin >> a;
		if (mark[a]==1)continue;//如果a标记过（在队列内）就继续
		else//不在队列内就要推进去
		{
			if (q.size() >= m)//如果队列满了就要出人
			{
				mark[q.front()] = 0;//出去的记得标记回0
				q.pop();
			}
			mark[a] = 1;
			q.push(a);
			count++;//推一次计数器＋1
		}
	}
	cout << count;
}
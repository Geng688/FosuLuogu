#include <iostream>
#include<algorithm>
#include<deque>
using namespace std;
const int N = 1000010;
int a[N];
struct node//将数字和位置绑定
{
	int pos, num;
};
deque<node>q;
int main()
{
	int n, k;
	cin >> n>>k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)//1.求最小值
	{
		//若队首（表窗口内最小值）的编号超出窗口，则弹出队首
		if (!q.empty() && q.front().pos < i - k + 1)q.pop_front();
		//弹出高个子元素
		while (!q.empty() && a[i] < q.back().num)
		{
			q.pop_back();
		}
		//当前元素排入
		q.push_back({ i,a[i] });
		//窗口形成，开始输出每遍窗口内的最小值
		if (i >= k)cout << q.front().num << " ";
	}
	while (!q.empty())q.pop_back();//清空栈
	cout << endl;
	for (int i = 1; i <= n; i++)//2.求最大值
	{
		//若队首（表窗口内最大值）的编号超出窗口，则弹出队首
		if (!q.empty()&&q.front().pos < i - k + 1)q.pop_front();
		//弹出水面元素
		while (!q.empty() && a[i] > q.back().num)
		{
			q.pop_back();
		}
		//沉淀当前元素
		q.push_back({i,a[i]});
		//窗口形成，开始输出每遍窗口内的最大值
		if (i >= k)cout << q.front().num<<" ";
	}
	return 0;
}
#include <iostream>
#include<algorithm>
#include<deque>
#define ll long long
using namespace std;
const ll N = 300010;
ll a[N];
int main()
{
	ll n, m,op,sum=0,temp;
	ll k,x,size;
	deque<ll>q;//记得是ll
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);//记得是n不是N
	for (ll i = 0; i < n; i++)//记得是ll（每定义一个变量就要确定它的类型）
	{
		q.push_back(a[i]);
	}
	for (ll i = 0; i < m; i++)
	{
		cin >> op;
		if (op == 1)
		{
			cin >> x;
			size = q.size();
			sum += x;//sum应该在含j循环外面赋值，不能不小心放在含j循环里了
			for (int j = 0; j < size; j++)//注意，q.size在循环过程中会变，而循环次数不能因为循环过程的改变而改变，所以必须赋给一个新变量使循环次数固定
			{
				//是back而不是front
				
				temp = q.back();
				if (temp+sum > k)
				{
					q.pop_back();//由于只踢，不改队列内的值，所以每次判断得用一个累计值sum来判断
				}
				else break;
			}
		}
		if (op == 2)
		{
			cin >> x;
			size = q.size();
			sum -= x;
			for (int j = 0; j < size; j++)//注意，q.size在循环过程中会变，而循环次数不能因为循环过程的改变而改变，所以必须赋给一个新变量使循环次数固定
			{
				temp = q.front();
				if (temp+sum< -k)
				{
					q.pop_front();
				}
				else break;
			}
		}
		if (op == 3)cout << q.size()<<endl;
	}
	return 0;
}
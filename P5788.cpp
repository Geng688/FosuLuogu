#include <iostream>
#include<algorithm>
#include<stack>
#define ll long long
using namespace std;
const ll N = 3000010;
ll a[N], f[N];
ll n;
stack<ll>s;//�������±�
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
			cout << f[i] + 1 << " ";//��1��ԭ�������ǵ��±��0��ʼ������Ŀ���±��1��ʼ
		if (f[i] == 0)cout << f[i] << " ";//ע������ո񣬷���ȫWa
	}
	return 0;
}
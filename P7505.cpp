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
	deque<ll>q;//�ǵ���ll
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);//�ǵ���n����N
	for (ll i = 0; i < n; i++)//�ǵ���ll��ÿ����һ��������Ҫȷ���������ͣ�
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
			sum += x;//sumӦ���ں�jѭ�����渳ֵ�����ܲ�С�ķ��ں�jѭ������
			for (int j = 0; j < size; j++)//ע�⣬q.size��ѭ�������л�䣬��ѭ������������Ϊѭ�����̵ĸı���ı䣬���Ա��븳��һ���±���ʹѭ�������̶�
			{
				//��back������front
				
				temp = q.back();
				if (temp+sum > k)
				{
					q.pop_back();//����ֻ�ߣ����Ķ����ڵ�ֵ������ÿ���жϵ���һ���ۼ�ֵsum���ж�
				}
				else break;
			}
		}
		if (op == 2)
		{
			cin >> x;
			size = q.size();
			sum -= x;
			for (int j = 0; j < size; j++)//ע�⣬q.size��ѭ�������л�䣬��ѭ������������Ϊѭ�����̵ĸı���ı䣬���Ա��븳��һ���±���ʹѭ�������̶�
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
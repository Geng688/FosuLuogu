#include <iostream>
#include<algorithm>
#include<deque>
using namespace std;
const int N = 1000010;
int a[N];
struct node//�����ֺ�λ�ð�
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
	for (int i = 1; i <= n; i++)//1.����Сֵ
	{
		//�����ף���������Сֵ���ı�ų������ڣ��򵯳�����
		if (!q.empty() && q.front().pos < i - k + 1)q.pop_front();
		//�����߸���Ԫ��
		while (!q.empty() && a[i] < q.back().num)
		{
			q.pop_back();
		}
		//��ǰԪ������
		q.push_back({ i,a[i] });
		//�����γɣ���ʼ���ÿ�鴰���ڵ���Сֵ
		if (i >= k)cout << q.front().num << " ";
	}
	while (!q.empty())q.pop_back();//���ջ
	cout << endl;
	for (int i = 1; i <= n; i++)//2.�����ֵ
	{
		//�����ף����������ֵ���ı�ų������ڣ��򵯳�����
		if (!q.empty()&&q.front().pos < i - k + 1)q.pop_front();
		//����ˮ��Ԫ��
		while (!q.empty() && a[i] > q.back().num)
		{
			q.pop_back();
		}
		//����ǰԪ��
		q.push_back({i,a[i]});
		//�����γɣ���ʼ���ÿ�鴰���ڵ����ֵ
		if (i >= k)cout << q.front().num<<" ";
	}
	return 0;
}
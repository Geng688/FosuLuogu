#include<iostream>
#include<queue>
using namespace std;
queue<int>q;
int main()
{
	int m, n,flag=0,count=0;
	int a,t;
	int fro;
	int mark[10000];//ÿ�����ֶ�Ӧ�ı�����飬�������ڶ����ڼ�Ϊ1������Ϊ0
	cin >> m >> n;
	while (n--)
	{
		cin >> a;
		if (mark[a]==1)continue;//���a��ǹ����ڶ����ڣ��ͼ���
		else//���ڶ����ھ�Ҫ�ƽ�ȥ
		{
			if (q.size() >= m)//����������˾�Ҫ����
			{
				mark[q.front()] = 0;//��ȥ�ļǵñ�ǻ�0
				q.pop();
			}
			mark[a] = 1;
			q.push(a);
			count++;//��һ�μ�������1
		}
	}
	cout << count;
}
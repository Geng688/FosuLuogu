#include <iostream>
#include<stack>
using namespace std;
int main()
{
    int n, m;
    long long x;
    stack<int>s;
    stack<int>max;//��¼��ǰ���ֵ
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m == 0)
        {
            cin >> x;
            s.push(x);
            if (max.empty() || x >= max.top()) //ֻҪmaxջΪ�ջ������ȵ�ǰ��������������max
            {
                max.push(x);
            }
            else 
            {
                max.push(max.top());//�����max���ڸ���һ��
            }

        }
        if (m == 1 && (!s.empty()))//ֻҪԭջ���գ�����ջ��ɾ��
        {
            s.pop();
            max.pop();
        }
        if (m == 2)
        {
            if (max.empty())cout << 0 << endl;//��maxջ�������0
            else cout << max.top() << endl;
        }
        
    }return 0;
}
    /*
    int n,m,flag=0;
        long long x;
        //stack<int>s;
        stack<int>max;
        cin>>n;
        max.push(flag);
        for(int i=0;i<n;i++)
        {
            cin>>m;
            if(m==0)
            {
                cin>>x;
                //s.push(x);
                if(x>=max.top()){
                    max.push(x);
                    flag=0;
                }
                else flag++;

            }
            if(m==1)
            {
                //s.pop();
                if(max.top()!=0)
                {
                    if(flag==0)max.pop();
                    if(flag>0)flag--;
                }
            }
            if(m==2)cout<<max.top()<<endl;
        }
        return 0;*/
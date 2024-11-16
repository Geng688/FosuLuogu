#include <iostream>
#include<stack>
using namespace std;
int main()
{
	char sign;
	int num,sum=0;
	stack<int>s;
	cin >> num;
	s.push(num%10000);
	while (cin >> sign >> num)
	{
		if (sign == '*')
		{
			num *= s.top();
			s.pop();
		}
		s.push(num%10000);
	}
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum%10000;
	return 0;
}
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int flag = 1;
	char s[300];
	stack<char>z;
	for (int i = 1; s[i-1] != '@'; i++)
	{
		cin >> s[i];
		if(s[i]=='(')z.push(s[i]);
		if (s[i] == ')')
		{
			if (!(z.empty()))z.pop();
			else {
				cout << "NO";
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
	{if(z.empty())cout << "YES";
	else cout << "NO";
	}
	return 0;
}
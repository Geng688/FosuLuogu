#include<stdio.h>
int main()
{
	int n, m, s1=0, s2;
	scanf("%d %d", &n, &m);
	s2 = ((1 + n) * (1 + m) * n * m) / 4;
	while (m, n)
	{
		s1 += m * n;
		m--;
		n--;
	}
	printf("%d %d", s1, s2 - s1);
}

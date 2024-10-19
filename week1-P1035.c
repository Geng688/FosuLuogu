#include<stdio.h>
int main()
{
	int k, n;
	double Sn = 1;
	n = 2;
	scanf("%d",&k);
	while(Sn<=k)
	{
		Sn+= 1.0 / n;
		n++;
	} 
	n--;
	printf("%d", n);
	return 0;
}

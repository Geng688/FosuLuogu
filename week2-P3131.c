#include<stdio.h>
int main()//若两数相减%7==0，则两数%7相等
{
    int n, s[50005], start[7], end[7];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &s[i]);
        s[i] = (s[i - 1] + s[i]) % 7;//整个前缀和%7的余数
    }
    for (int i = n; i >= 1; i--)
    {
        start[s[i]] = i;//遍历更新第一个余数为s[i]的数
    }
    start[0]=0;
    for (int i = 1; i <= n; i++)
    {
        end[s[i]] = i;
    }
    int x = -1;
    for (int i = 0; i < 7; i++)
    {
        if (end[i] - start[i] > x)
            x = end[i] - start[i];
    }
    printf("%d", x);
    return 0;
}

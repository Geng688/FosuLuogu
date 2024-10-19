#include<stdio.h>
int main()
{
    int n, m,l,r, a[100010], S[100010];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        S[i] = S[i - 1] + a[i];
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", S[r] - S[l-1]);
    }
}

#include<stdio.h>
int n, m, a[1005][1005], b[1005][1005];
void inset(int x1, int y1, int x2, int y2, int c)
{
    b[x1][y1] += c;
    b[x2 + 1][y1] -=c;
    b[x1][y2 + 1] -= c;
    b[x2 + 1][y2 + 1] += c;
}
int main()
{
    
    scanf("%d%d", &n, &m);
    int x1, y1, x2, y2;
    while (m--)
    {
        scanf("%d%d%d%d", &x1, &y1,&x2, &y2);
        inset(x1, y1, x2, y2, 1);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;

}

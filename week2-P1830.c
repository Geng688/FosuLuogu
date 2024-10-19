#include<stdio.h>
int n, m, x, y;
int x1, x2, y1, y2;
int x3, y3;
int a[105][105], b[105][105];
int main()
{
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for (int k = 1; k <= x; k++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);//变量不要写错
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                a[i][j]++;
                b[i][j] = k;
                
            }
        }
    }
    for (int k = 1; k <= y; k++)
    {

        scanf("%d%d", &x3, &y3);
        if (a[x3][y3] > 0)
        {
            printf("Y %d %d\n", a[x3][y3], b[x3][y3]);//一定要换行
        }
        else
        {
            printf("N");
        }
    }
    return 0;
}

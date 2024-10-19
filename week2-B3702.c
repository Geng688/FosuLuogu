#include<stdio.h>
    int n, m, Sx, Sy;
struct list {
    int x;
    int y;
}a[1005][1005];
int main()
{

    scanf("%d%d%d%d", &m, &n, &Sx, &Sy);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d%d", &a[i][j].x, &a[i][j].y);
        }
    }
    list loca;
    loca.x = Sx;
    loca.y = Sy;
    do {
        printf("%d %d\n", loca.x, loca.y);
        loca = a[loca.x][loca.y];
    } while (loca.x != 0 || loca.y != 0);
}

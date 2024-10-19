#include<stdio.h>
struct list {
    int head;
    char name[11];
}a[100000];
int main()
{
    int n, m,x,y,j;
    scanf("%d %d", &n, &m);
    for (int i = 0; i <n; i++)
    {
        scanf("%d %s", &a[i].head, &a[i].name);
    }
    j = 0;//1.为什么j一定得是0开始，2.为什么不能循环模拟
    for (int i = 1; i <= m; i++)
    {
        scanf("%d %d", &x, &y);
        if ((a[j].head == 0 && x == 0)|| (a[j].head == 1 && x == 1))//审题发现y<n
            j=(j+n-y)%n;
        else if ((a[j].head == 0 && x == 1) || (a[j].head == 1 && x == 0))
            j=(j+n+y)%n;
    }
    printf("%s", a[j].name);
    return 0;
}

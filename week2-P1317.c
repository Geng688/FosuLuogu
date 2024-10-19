#include<stdio.h>
int main()
{
    int n, a = 0, b, x = 0, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b);
        if (a > b)
            x = 1;
        if (a < b && x == 1)
        {
            x = 0;
            count++;
        }
        a = b;
    }
    printf("%d", count);
    return 0;
}

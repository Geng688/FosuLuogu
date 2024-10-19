#include<stdio.h>
int main()
{
    char str[110];
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] += 'A' - 'a';
    }
    printf("%s", str);
    return 0;
}

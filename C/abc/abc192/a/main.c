#include <stdio.h>

int main()
{
    int X, ans;
    scanf("%d", &X);
    ans = 100 - (X % 100);
    printf("%d", ans);
    return 0;
}
#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%s", &s);
    int i = 0;
    while (s[i] != '\0')
    {
        if ((i % 2 == 0) && ('A' <= s[i] && s[i] <= 'Z'))
        {
            printf("No");
            return 0;
        }
        if ((i % 2 == 1) && ('a' <= s[i] && s[i] <= 'z'))
        {
            printf("No");
            return 0;
        }
        i++;
    }
    printf("Yes");
    return 0;
}
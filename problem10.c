#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%lld %lld", a, b);
    return 0;
}
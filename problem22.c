#include <stdio.h>
int main()
{

    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long quotient = a / b;
    long long remainder = a - (b * quotient);
    printf("%lld %lld", quotient, remainder);
    return 0;
}
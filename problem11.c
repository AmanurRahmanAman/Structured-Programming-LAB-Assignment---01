#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long quotient, remainder;
    quotient = a / b;
    remainder = a % b;
    printf("%lld\n%lld", quotient, remainder);
    return 0;
}
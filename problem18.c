#include <stdio.h>
int main()
{
    long long days;
    scanf("%lld", &days);
    long long years = days / 365;
    long long months = (days % 365) / 30;
    long long remdays = (days % 365) % 30;
    printf("%lld\n%lld\n%lld\n", years, months, remdays);
    return 0;
}
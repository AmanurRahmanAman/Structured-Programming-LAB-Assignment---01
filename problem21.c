#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 10 && n <= 99)
    {
        int q1 = n / 10;
        int lastD = n % 10;
        int firstD = q1 % 10;
        printf("%d%d\n", lastD, firstD);
    }
}
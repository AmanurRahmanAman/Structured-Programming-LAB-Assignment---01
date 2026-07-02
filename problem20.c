#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 100 && n <= 999)
    {
        int q1 = n / 10;
        int lastD = n % 10;
        int secondD = q1 % 10;
        int q2 = q1 / 10;
        int firstD = q2 % 10;
        int square1 = firstD * firstD;
        int square2 = lastD * lastD;
        printf("%d\n%d\n", square1, square2);
    }
    return 0;
}
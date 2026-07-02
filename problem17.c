#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    char capital = c - 32;
    printf("%c", capital);
    return 0;
}
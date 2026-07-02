#include <stdio.h>
#include <ctype.h>
int main()
{
    char C;
    scanf("%c", &C);
    char lower = towlower(C);
    printf("%c", lower);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 1, b = 10;
    while (a <= 10)
    {
        printf("%d", a);
        a++;
    }
    while (1 <= b)
    {
        printf("%d", b);
        b--;
    }
    a = 20;
    do
    {
        printf("\n%d", a);
        a++;
    } while (a <= 10);
}
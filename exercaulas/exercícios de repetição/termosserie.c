#include <stdio.h>

int main()
{
    long long opera = 1;
    printf("%lld\n", opera);
    for (int i = 0; i < 29; i++)
    {
        opera = opera * 3;
        printf("%lld\n", opera);
    }
}
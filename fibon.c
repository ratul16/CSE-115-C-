#include <stdio.h>
#include <math.h>

int fibonacci(int n) // n>=0
{
    int a, b;
    int c, i;

    if (n<=1) return n;
    else {
        a = 0;
        b = 1;
        for (i=2; i<=n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main(void)
{
    int x = 3;

    printf("%d", fibonacci(x));

    return 0;
}

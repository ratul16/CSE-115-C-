#include <stdio.h>

void swap_C(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    return;
}

void swap_CPP(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
    return;
}

int main(void)
{
    int a = 10, b = 12;
    printf("Values of a and b: %d and %d\n", a,b);
    swap_C(&a,&b);
    printf("Values of a and b, after first swap : %d and %d\n", a,b);
    swap_CPP(a,b);
    printf("Values of a and b, after second swap: %d and %d\n", a,b);
    return 0;
}

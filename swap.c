#include <stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    return;
}

int main(void)
{
    int a = 10, b = 12;
    printf("test");
    swap(&a,&b);
    return 0;
}

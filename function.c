#include<stdio.h>

int square(x);
int square(x)
{
    int a;
    a=x*x;
    return a;
}

int main(void)
{
    int n;
    scanf("%d",&n);

    printf("The Square is %d",square(n));

    return 0;
}

#include<stdio.h>

int large(int x,int y);
int large(int x,int y)
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

#include<stdio.h>

int large(int x,int y)
{
    if(x>y)
        return x;
    else return y;
}

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    int largenum = large(n,m)
    printf("The largest is %d",largenum);

    return 0;
}

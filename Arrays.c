#include<stdio.h>

int main()
{
    int a[5];
    int i,num=0;

    for(i=0;i<5;i++){
        scanf("%d",&num);
        a[i]=num;
    }
    for(i=0;i<5;i++){

    printf("%d ",a[i]);
    }

    return 0;
}

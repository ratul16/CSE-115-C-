#include <stdio.h>

int main(void)

{

    int a[10]={1,21,33,4,53,653,75,8,37,10},i,p=0,n;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(a[i]>a[p])
            p=i;
    }


    printf("Avg %d",a[p]);

    return 0;
}



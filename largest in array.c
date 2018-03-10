#include <stdio.h>

int main(void)

{
    int m[10]={2,3,1,5,55,7,89,8,45,45,},i,n,p;
    scanf("%d",&n);
    p=0;
    for(i=1;i<n;i++){
        if(m[i]>m[p])
            p=i;
    }
    printf("%d",m[p]);
    return 0;
}

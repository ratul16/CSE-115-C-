#include <stdio.h>

int main(void)

{
    int m[]={1,2,3,4,5,6,7,8,9,10},i,n;
    int count=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(m[i]==n){
                printf("yes");
        }
        if (m[i]!=n)printf("no");


    }
    //printf("%d",count);

    return 0;
}

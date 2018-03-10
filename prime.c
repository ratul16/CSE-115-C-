#include <stdio.h>

int main(void)

{
    int n,i,prime=0;

    scanf("%d",&n);

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            prime=1;
        }
    }
    if(prime==0){

    printf("Prime\n");

    }
    else printf("Not prime\n");

    return 0;
}

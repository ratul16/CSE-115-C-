#include <stdio.h>

int main(void)

{
    int i,sum=0;
    int x[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
    sum=sum+x[i];
    }
    printf("%d",sum);
    return 0;
}

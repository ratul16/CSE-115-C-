#include <stdio.h>

int main(void)

{
    int a,b,c,t,i;
    scanf("%d %d",&a,&b);

    for(i=0;b%a!=0;i++){
        t=b%a;
        b=a;
        a=t;
    }

    printf("%d",a);



    return 0;

}

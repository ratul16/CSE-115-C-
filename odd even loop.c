#include <stdio.h>

int main(void)

{
    int a,sum;

    do{
        scanf("%d",&a);
        if (a%2==0){printf("its even\n");
        }else printf("its odd\n");

    }while (a!=0);scanf("%d",&a);

    return 0;
}

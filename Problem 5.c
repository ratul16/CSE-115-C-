#include <stdio.h>

int main()

{
    int bp,bq,pp,pq,sp,sq,tb,tp,ts,tg;

    printf("Enter the price of Biscuits: ");
    scanf("%d",&bp);

    printf("Enter the quantity of Biscuits:");
    scanf("%d",&bq);

    printf("Enter the price of Pens:");
    scanf("%d",&pp);

    printf("Enter the quantity of Pens:");
    scanf("%d",&pq);

    printf("Enter the price of Sodas: ");
    scanf("%d",&sp);

    printf("Enter the quantity of Sodas: ");
    scanf("%d",&sq);

    tb=bp*bq;
    tp=pp*pq;
    ts=sp*sq;
    tg=tb+tp+ts;


    printf("\n\nProduct \t\t Price \t\t Quantity \t\t Total \n\n");

    printf("\n Biscuits \t\t %d \t\t %d \t\t\t: %d ",bp,bq,tb);
    printf("\n\n Pens  \t\t\t %d \t\t %d \t\t\t: %d ",pp,pq,tp);
    printf("\n\n Soda  \t\t\t %d \t\t %d \t\t\t: %d ",sp,sq,ts);

    printf("\n******************************************************************************\n");

    printf("\t\t\t\t\t\tThe Grant Total is:%d ",tg);

    return 0;


}

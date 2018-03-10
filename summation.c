#include <stdio.h>

int main(void)

{
    int deg,n,def;

    printf("enter deg: ");
    scanf("%d",&deg);

    printf("\nenter value of n : ");
    scanf("%d",&n);


    switch(deg){

    case 1:printf("\n\nThe sum of n=%d is %d",n,(n*(n+1))/2);break;
    case 2:printf("\n\nThe sum of n=%d is %d",n,(n*(2*n+1)*(n=1))/6);break;
    case 3:printf("\n\nThe sum of n=%d is %d",n,((n*(n+1))/2)*((n*(n+1))/2));break;
    default:printf("\n\nWrong input",def);

    }
    return 0;

}

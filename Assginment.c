#include <stdio.h>

int main(void)

{
    float a,b,c,r1,r2,r3,r4;
    printf("This Program will find the Roots of a Quadric Equation");

    printf("\n\nEnter the value of a:");
    scanf("%f",&a);

    printf("\n\nEnter the value of b:");
    scanf("%f",&b);

    printf("\n\nEnter the value of c:");
    scanf("%f",&c);

    if((b*b-4*a*c)>=0){
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("\n\nThe Roots of the Quadric Equation is %.2f and %.2f ",r1,r2);

    }

    else{

    r3=-b/(2*a);
    r4=sqrt(-(b*b-4*a*c))/(2*a);

    printf("\n\nThe Root of the Quadric Equation is %.2f+i%.2f and %.2f-i%.2f",r3,r4,r3,r4); }


    return 0;

}

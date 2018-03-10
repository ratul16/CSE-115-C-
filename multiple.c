#include <stdio.h>

int main(void)

{
    int a;
    printf("This program will determine if the number is multiple of both 3 and 5");

    printf("\n\nEnter a number:");
    scanf("%d",&a);

    if((a%3==0)&&(a%5==0)){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }
    return 0;
}

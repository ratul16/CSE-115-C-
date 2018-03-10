#include <stdio.h>

int main()

{
    float a, b, sum, pro, diff, avg; //Defining the variables

    printf("Enter the 1st number: ");
    scanf("%f",&a);

    printf("\n Enter the 2nd number: ");
    scanf("%f",&b);

    sum=a + b;  //calculating the sum
    pro=a * b;   //calculating the product
    diff=a - b;   //calculating the difference
    avg=(a = b)/2;  //calculating the average

    printf("\n\nThe Sum of a and b is: %.1f", sum);

    printf("\n\nThe Product of a and b is: %.1f", pro);

    printf("\n\nThe Difference of a and b is: %.1f", diff);

    printf("\n\nThe Average of a and b is: %.1f", avg);

    return 0;

}

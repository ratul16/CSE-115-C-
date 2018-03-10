/* Add Two numbers */

#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year%4!=0) {
        printf("%d is NOT a Leap Year\n");
    } else if (year%100!=0) {
        printf("%d is a Leap Year\n");
    } else if (year%400!=0) {
        printf("%d is NOT a Leap Year\n");
    } else {
        printf("%d is a Leap Year\n");
    }

    return 0;
}

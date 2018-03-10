#include <stdio.h>

int main(void)
{
    int i, j, k;

    int oct = 018;

    k = 5;

    for (i=0; i<k; i++) {
        for (j=0; j<i; j++) {
            printf("  ");
        }
        for (j=i; j<k; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

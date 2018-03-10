#include <stdio.h>

int main(void)
{
    int i, j, k;

    k = 5;

    for (i=0; i<k; i++) {
        for (j=0; j<(k-i-1); j++) {
            printf("  ");
        }
        for (j=k-i-1; j<k; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

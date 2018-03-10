#include <stdio.h>

int main(void)
{
    int n, a;

    int i, s;

    printf("How many numbers you want to add: ");
    scanf("%d", &n);

    s = 0;
    for (i=1; i<=n; i = i + 1) {
        printf("Enter Number: ");
        scanf("%d", &a);
        if (a<0) continue;
        else if (a==0) break;
        s = s + a;
    }

    printf("Sum of %d numbers is: %d\n", n, s);

    return 0;
}

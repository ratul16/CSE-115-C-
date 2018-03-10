#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b[6] = {10,20,30,40,50,60};
    float c[4]={1.2,3.4,5.6,7.8};
    double d[4]={1.2,3.4,5.6,7.8};
    char s[4]="NSU";
    int i,sum,n;

    int *p = &a;

    printf("%p %p %p %d\n\n", &a, &p, p, *p);

    printf("b=%p &b[0]=%p &b[3]=%p\n", b, &b[0], &b[3]);
    printf("c=%p &c[0]=%p &c[3]=%p\n", c, &c[0], &c[3]);
    printf("d=%p &d[0]=%p &d[3]=%p\n", d, &d[0], &d[3]);
    printf("s=%p &s[0]=%p &s[3]=%p\n", s, &s[0], &s[3]);

    p = b;
    printf("%p %d %d %d\n", p, *p, *(p+2), p[2]);

    p = &b[2];
    printf("%p %d %d %d\n", p, *p, *(p+2), p[2]);

    *p = 15; // p[0] = 15;
    *(p+1) = 25; // p[1] = 25;
    printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3],b[4]);

    n = 5;
    p = (int *) malloc(n*sizeof(int));
    if (p==NULL) {
        printf("Not enough Memory\n");
        exit(-1);
    }

    for (i=0; i<n; i++) {
        scanf("%d", &p[i]);
    }

    sum = 0;
    for (i=0; i<n; i++) {
        sum = sum + p[i];
    }
    printf("%d %d\n", sum, sum/n);

    return 0;
}

#include <stdio.h>
#include <stdarg.h>

int vArgsTest(int n, ...)
{
    int i, j;
    va_list vlist;

    va_start(vlist,n);

    for (i=0; i<n; i++) {
        j = va_arg(vlist,int);
        printf("%d\n", j);
    }

    va_end(vlist);

    return 0;
}

int main(void)
{
    vArgsTest(2,10,20);
    vArgsTest(3,23,34,56,35);
    return 0;
}
// end of file

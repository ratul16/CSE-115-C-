#include <stdio.h>

int foo()
{
    return 0;
}

int func(void) {return 0;}

int main(void)
{
    printf("%d", sizeof(void));
    foo(1,23,9);
    func(1,2,3);
    return 0;
}

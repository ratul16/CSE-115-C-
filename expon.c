#include <stdio.h>
#include <math.h>

#define L 0.000001
#define Pi 3.14159

double expon(double x)
{
    int i;
    double s,t;

    i = 1; s = 0.0; t = 1;
    while (t>L || t<-L) {
        s = s + t;
        t = (t*x)/i;
        i = i + 1;
    }
    return s;
}

int main(void)
{

    printf("%f", expon(1));

    return 0;
}

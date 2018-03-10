#include <stdio.h>
#include <math.h>

#define L 0.000001
#define Pi 3.14159

double CosineDegree(double x)
{
    int i;
    double s,t;

    x = x - ((int)(x/360))*360; // x = fmod(x,360);
    x = x * Pi / 180;

    i = 0; s = 0.0; t = 1;
    while (t>L || t<-L) {
        s = s + t;
        t = -t * (x * x)/((i+1)*(i+2));
        i = i + 2;
    }
    return s;
}

int main(void)
{

    printf("%f", CosineDegree(100));

    return 0;
}

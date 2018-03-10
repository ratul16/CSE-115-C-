#include <stdio.h>

int main()

{
    int fa, cel; //Defining the variables

    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%d", &fa);

    cel=5 * ((fa-32)/9);

    printf("\n%d Fahrenheit=%d Celsius",fa, cel);

    return 0;
}

#include <stdio.h>

int main()

{
    float ra,ar,vo; //Defining the variables

    #define PI 3.1416 //Defining constant value

    printf("Enter the radius of the sphere: ");
    scanf("%f",&ra);

    ar=4 * PI * ra * ra; //calculating the sphere area
    vo=(4/3) * PI * ra * ra * ra; //calculating the sphere volume

    printf("\n\n\The area of the sphere is: %f",ar); //displaying the sphere area

    printf("\n\nThe Volume of the sphere is: %f",vo); //displaying the sphere volume

    return 0;



}

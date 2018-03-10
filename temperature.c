// This program converts temperature from celsius
// to fahrenheit (C to F)
// May 27, 2012
// EEE/ETE 132.2

#include <stdio.h>

int main(void)
{
	float celsius;
	float farh;

	printf("Enter the Temp in C:");
	scanf("%f",&celsius);

	farh = ((9*celsius)/5) + 32;

	printf("The temp in F is: %.1f", farh);

	return 0;
}

// end of file

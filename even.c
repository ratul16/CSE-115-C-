#include <stdio.h>

int main(void)
{
	int a;

	scanf("%i", &a);

	if (a%2==0)
        printf("%d is an even number\n", a);
	else
		printf("%d is an odd number\n", a);

	return 0;
}

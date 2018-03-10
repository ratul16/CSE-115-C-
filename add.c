#include <stdio.h>

int main()
{
   int n, sum = 0, c, value,pro=1;

   printf("Enter the number of integers you want to add\n");
   scanf("%d", &n);

   printf("Enter %d integers\n",n);

   for (c = 1; c <= n; c++)
   {
      scanf("%d", &value);
      sum = sum + value;
      pro=pro*value;
   }

   printf("Sum of all integers = %d\n",sum);
   printf("Product of all integers = %d\n",pro);

   return 0;
}

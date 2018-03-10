#include<stdio.h>

main()
{
      int n, c, k, x = 1;

      scanf("%d", &n);

      for ( c = 1 ; c <= n ; c++ )
      {
          for ( k = 1 ; k <= n-c ; k++ )
          {
              printf("%d", x);
              x++;
          }

          x--;

          for ( k = 1 ; k <= 2*c-1 ; k++ )
          {
              x--;
              printf("%d", x);
          }

          printf("\n");
          x = 1;
      }

      return 0;
}


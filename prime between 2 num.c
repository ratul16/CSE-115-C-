
#include<stdio.h>

int main ()
{
  int n1, n2, i, j, flag,l,h;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &n1, &n2);

  l=n1;h=n2;
 /* if(n1>n2){
    l=n2;h=n1;
  }
  printf("Prime numbers between %d and %d are: ", l, h); */

  for(i=2; i<=l; i++)
  {
      flag=0;
      for(j=2; j<=i/2; j++)
      {
        if(i%j==0)
        {
          flag=1;

        }
      }
      if(flag==0)
        printf("%d ",i);
  }
  return 0;
}

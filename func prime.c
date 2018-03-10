#include<stdio.h>

int prime(int x,int y);
int prime(int x,int y)
{
    int i,j,l,h,flag;
    l=x;h=y;
  if(x>y){
    l=y;h=x;
  }
 // printf("Prime numbers between %d and %d are: ", l, h);
 printf("Prime numbers:");
  for(i=l+1; i<=h; i++)
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
  }return i;
}

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);

    printf("%d",prime(n,m));

    return 0;
}

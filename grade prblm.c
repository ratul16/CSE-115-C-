#include <stdio.h>
int main(){
  int i,j,k,sum=0;
  printf("It will sum the series\n\n\n");
  for(i=1;i<=49;i+=3){
    j=i+1;
    k=i+2;
    sum=sum+(i*j*k);
  }

  printf("The sum is : %d",sum);
  return 0;
}

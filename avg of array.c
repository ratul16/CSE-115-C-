#include <stdio.h>

int avgofelement(int x[],int y);
int avgofelement(int x[],int y)
{
    int i,sum=0,avg;
    for(i=0;i<y;i++){
        sum=sum+x[i];
        //avg=sum/i;
    }return sum/i;
}

int main(void)
{
   int x[]={1,2,3,4,5,6,7,8,9,10},y;
   scanf("%d",&y);

   printf("%d",avgofelement(x,y));

   return 0;


}

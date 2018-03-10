#include <stdio.h>

int sumofelement(int x[],int y);
int sumofelement(int x[],int y)
{
    int i,sum=0,avg;
    for(i=0;i<y;i++){
        sum=sum+x[i];
        //avg=sum/i;
    }return sum;
}

int main(void)
{
   int x[]={1,2,3,4,5,6,7,8,9,10},y;
   scanf("%d",&y);

   printf("%d",sumofelement(x,y));

   return 0;


}

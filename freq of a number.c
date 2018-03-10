#include <stdio.h>

int freqofnum(int x[],int y,int z);
int freqofnum(int x[],int y,int z)
{
    int i,count=0;
    for(i=0;i<y;i++){
        if(x[i]==z){
            count=count+1;
        }
    }return count;
}

int main(void)

{
    int m[]={12,2,31,4,5,4,7,4,5,130},n,o;
    scanf("%d %d",&n,&o);
        printf("%d \n",freqofnum(m,n,o));
    return 0;
}

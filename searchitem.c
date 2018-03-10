#include <stdio.h>

int finditem(int x[],int y,int z);
int finditem(int x[],int y,int z)
{
    int i;
    for(i=0;i<y;i++){
        if(x[i]==z)return z;
    }return -1;
}

int main(void)

{
    int m[]={12,2,31,4,45,63,7,8,239,130},n,o;
    scanf("%d %d",&n,&o);
        printf("%d \n",finditem(m,n,o));
    return 0;
}

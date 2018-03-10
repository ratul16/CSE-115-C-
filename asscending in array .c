#include<stdio.h>

int name_sort(int m[], int y);
int name_sort(int m[], int y){
 int i,j,k,t;
for(i=0;i<y;i++){
    k=i;
    for(j=i+1;j<y;j++){
        if(m[j]<m[k])k=j;}

        t=m[i];
        m[i]=m[k];
        m[k]=t;
}

}

int main()
{
        int a[10]= {3,4,5,4,6,6,1,2,3,6},i;

name_sort(a,10);
for(i=0;i<10;i++)
printf("%d ",a[i]);

    return 0;
}

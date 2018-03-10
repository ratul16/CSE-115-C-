#include<stdio.h>

int main ()
{
    int i, fst = 0, n,snd = 1,trd;

    printf("Enter nth Number: ");
    scanf("%d",&n);
    printf("\n%d\n%d", fst, snd);
    for(i=3;i<=n;i++){
    trd= fst + snd;
    fst = snd;
    snd= trd;
    printf("\n%d",trd);
    }

    return 0;

}


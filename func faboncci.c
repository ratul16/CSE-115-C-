#include<stdio.h>

int fabo(x);
int fabo(x)
{
    int fst=0,snd=1,trd,i;

    printf("The febo is \n%d\n%d", fst, snd);
    for(i=3;i<=x;i++){
    trd= fst + snd;
    fst = snd;
    snd= trd;
    printf("\n%d",trd);
    }return ;


}

int main(void)
{
    int n;
    scanf("%d",&n);

    printf("%d",fabo(n));

    return 0;
}


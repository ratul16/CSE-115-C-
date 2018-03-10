#include<stdio.h>

int main()
{
        int i,j,n,count=0;
    char str[100];
    gets(str);

    puts(str);

    n=strlen(str);

    for(i=0;i<n;i++){
    if(str[i]==' ')
    count = count + 1;
    }

    printf("%d", count +1);
    //i is expected that there is no unnecessary space in between words and there is no space before the sentence and after the sentence
    return 0;
}

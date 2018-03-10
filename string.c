#include<stdio.h>
#include<string.h>

int main ()
{
    int t;
    char str[100]="hey ";
    char a[100];
    gets(a);

    strlen(str);
    printf("%s\n",str);
    strcat(str,a);//adds one with another
    printf("%s\n",str);
    strcpy(str ,a);//replace one with another
    printf("%s\n",str);
    strrev(str);//reverse a value
    printf("%s\n",str);
    strlwr(str);//it make char into lower case
    puts(str);





    return 0;

}

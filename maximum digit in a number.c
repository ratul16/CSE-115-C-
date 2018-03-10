#include <stdio.h>

int main(void)

{
    int n,a,b,c;

    printf("Enter a 3 digit number:");
    scanf("%d",&n);

    a=n%10;
    b=(n/10)%10;
    c=n/100;

    if((a>=b)&&(a>=c)){printf("\n\n%d is the largest number",a);
    }
    else if((b>=a)&&(b>=c)){printf("\n\n%d is the largest number",b);
    }
    else if((c>=a)&&(c>=b)){printf("\n\n%d is the largest number",c);
    }
    else {printf("\n\ninvalid info");}



    return 0;

}

#include <stdio.h>

int main()

{
    int a;

    printf("This Program will show if the year is a leap year or not");

    printf("\n\nEnter a year:");
    scanf("%d",&a);

    if(a%4!=0){printf("\nnot leap year");
    }
    else if (a%100!=0){printf("\nleap year");
    }
    else if (a%400!=0){printf("\nnot leap year");
    }
    else {printf("\nleap year");}

    return 0;


}

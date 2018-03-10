#include <stdio.h>

int main(void)

{
    int a,b,c,d,cas,def;

    printf("Enter your age:");
    scanf("%d",&a);

    if ((a>=1&&a<=20)){(cas=1);
    }
    else if ((a>=21&&a<=30)){(cas=2);
    }
    else if ((a>=31&&(a<=50))){(cas=3);
    }
    else if ((a>=51&&a<=70)){(cas=4);
    }
    else{(cas=def);
    }


    switch(cas){

    case 1:printf("\nTeenager",a);break;
    case 2:printf("\nYoung",b);break;
    case 3:printf("\nOld",c);break;
    case 4:printf("\nAged",d);break;
    default:printf("\nWrong Number");break;

    }

    return 0;

}

#include <stdio.h>

int main(void)

{
    float a;
    char ch;
    int n,i=1;

    printf("The is program will show your grades\n\n");
    printf("Enter Number of grade submission: ");
    scanf("%d",n);

do{
    printf("\n\nEnter your marks: ");
    scanf("%f",&a);


        if(a>=90 && a<=100){printf("\n\nYour Grade is A \n\n'Prefect Score' ");

    }else if(a>=80 && a<=89){printf("\n\nYour Grade is B \n\n'Better luck next time'");

    }else if(a>=70 && a<=79){printf("\n\nYour Grade is C \n\n'You need to study more'");

    }else if(a>=60 && a<=69){printf("\n\nYour Grade is D \n\n'Be attentive to your studies'");

    }else if(a>=50 && a<=59){printf("\n\nYour Grade is F \n\n'Go home you are drunk'");

    }else if(a>=0 && a<=49){printf("\n\nYour Grade is F \n\n'Go home you are drunk'");

    }else {printf("\n\nInvalid Info");};

    i++;

    }while(i<n-1);



    return 0;
}

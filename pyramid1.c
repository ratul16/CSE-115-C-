#include <stdio.h>

int loop (int a )
{
    int i,j,k;
    for(i=1;i<=a;i++){  /* Row */
        for(j=1;j<=i;j++){  /* Star */
            printf("* ");
        }
        for(k=1;k<=a;k++){  /* Columns */
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=a-1;i++){    /* Row */
        for(j=i;j<=a-1;j++){ /* Star */
            printf("* ");
        }
        printf("\n");
    }
}


int main(void)

{
    int i,j,k,n;
    printf("Enter Rows of Pyramid: \n");
    scanf("%d",&n);

    loop(n);

    return 0;
}


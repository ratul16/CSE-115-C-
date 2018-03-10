#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int a,b;
    FILE *fp;

    for (i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    fp = fopen("test.txt", "r");

    fscanf(fp,"%d%d", &a, &b);
    printf("%d %d", a,b);

    return 0;
}

// end of file

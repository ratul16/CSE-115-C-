#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char id[16];
    char name[64];
    float marks;
};

int main(void)
{
    FILE *fp;
    char str[80];
    struct Student a, b, *ps;

    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("File could not be created");
        exit(-1);
    }

    fputs("This is our new text file",fp);

    fclose(fp);

    fp = fopen("results.txt", "r");

    if (fp == NULL) {
        printf("File could not be created");
        exit(-1);
    }

    while (!feof(fp)) {
        fgets(str,80,fp);
        puts(str);
    }

    fclose(fp);

    // dynamic memory allocation

    ps = (struct Student *) malloc(40*sizeof(struct Student));

    if (ps==NULL) {
        printf("\nMemery Allocation Failed\n");
        exit(-1);
    }

    strcpy(ps[0].id,"12345");
    strcpy(ps[0].name,"NoName");
    ps[0].marks = 23.5;

    fp = fopen("stud.dat", "wb+");
    if (fp==NULL) {
        printf("\nFile Creation Failed\n");
        exit(-1);
    }

    fwrite(ps,sizeof(struct Student),1,fp);

    rewind(fp);

    fread(&b,sizeof(struct Student),1,fp);
    printf("%s %s %0.2f\n", b.id, b.name, b.marks);

    fclose(fp);

    if (ps!=NULL) free(ps);

    return 0;
}

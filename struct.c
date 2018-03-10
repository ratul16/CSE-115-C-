#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book tBook;

struct Book {
    char name[64];
    int npages;
    float price;
    int year;
} a;

union uTest {
    char name[32];
    char id[16];
} ut;

struct bfTest {
    unsigned f1:4;
    unsigned f2:8;
    signed f3:16;
    unsigned unused:4;
} bft;

int main(void)
{
    struct Book b, c = {"QABC", 23, 23.5, 2004}, *ps;
    tBook d[32], *q;
    FILE *fp;

    // structure

    strcpy(b.name, "Test");
    b.npages = 731;
    b.price = 365.0;
    b.year = 2002;

    c = b;
    d[0] = b;
    ps = &b;
    q = &c;

    printf("%s %d %f %d\n", (*ps).name, ps->npages, b.price, c.year);

    // union

    strcpy(ut.name, "CSE115");
    puts(ut.id);

    // bit field

    bft.f1 = 3;
    bft.f3 = -23;
    printf("%u %d\n", bft.f1, bft.f3);

    // dynamic memory allocation

    q = (struct Book *) malloc(40*sizeof(struct Book));

    if (q==NULL) {
        printf("\nMemery Allocation Failed\n");
        exit(-1);
    }

    strcpy(q[0].name,"NoName");
    q[0].npages = 234;
    q[0].price = 345;
    q[0].year = 2012;

    fp = fopen("stud.dat", "wb+");
    if (fp==NULL) {
        printf("\nFile Creation Failed\n");
        exit(-1);
    }

    fwrite(&q[0],sizeof(struct Book),1,fp);

    rewind(fp);

    fread(&b,sizeof(struct Book),1,fp);
    printf("%s %d %f %d\n", b.name, b.npages, b.price, b.year);

    fclose(fp);

    if (q!=NULL) free(q);

    return 0;
}

// end of program

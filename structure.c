#include <stdio.h>

typedef struct
{
char name[80];
int age;
float scr;
int total_run,total_wickets;
int matchplayed;

}crikplay;

    int main(void)
{
    crikplay p1={"ratul",20,34.54,100,34,56};

    printf("%s %d \n",p1.name,p1.age);

    return 0;
}

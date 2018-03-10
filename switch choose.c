#include<stdio.h>
#include<string.h>

typedef struct{
int id;
char name[40];
float cgpa;
} student;

void addstudent(int num){
     FILE *fp=fopen("student_db.txt", "a+");
     int b;
     student std[100];
     for(b=0;b<num;b++){
         printf("Name of Student: ");
         //gets(std[b].name);
         scanf("%s",&std[b].name);
         printf("\nID no of the student: ");
         scanf("%d",&std[b].id);
         printf("\nCGPA: ");
         scanf("%f",&std[b].cgpa);
         fprintf(fp,"%s\t%d\t%.1f\n",std[b].name,std[b].id,std[b].cgpa);
     }
     fclose(fp);
}

void displayStudentList(void){
     FILE *fp=fopen("student_db.txt", "r");
     int b=0;
     student std[100];
     printf("Sl#\tName\t\tID no.\t%CGPA\n");
     while(fscanf(fp,"%s", &std[b].name)!=EOF){
           fscanf(fp,"%d", &std[b].id);
           fscanf(fp,"%f", &std[b].cgpa);
           printf("%d.\t%s\t\t%d\t%.1f\n",b+1, std[b].name,std[b].id,std[b].cgpa);
           b++;
     }
}

void searchStudent(int id){
     FILE *fp=fopen("student_db.txt", "r");
     int b=0;
     student std[100];
     printf("SL#\tName\t\t\t\tID no.\t\t%CGPA\n");
     while(fscanf(fp,"%s", &std[b].name)!=EOF){
           fscanf(fp,"%d", &std[b].id);
           fscanf(fp,"%f", &std[b].cgpa);

           if(id == std[b].id){
              printf("%d.\t%s\t\t%d\t\t%.1f\n",b+1, std[b].name,std[b].id,std[b].cgpa);
           }
           b++;
     }
}
int main(){
    int i,b,c;
    char a;

    student std[100];
    FILE *fp=fopen("test.txt", "a+");
    int flag=0;

    printf("\t\t\tWelcome to the Student CGPA history of NSU\n\n");

    printf("In this program you would be able to do the following task:\n");
    printf("1.Enter new students information.\n");
    printf("2.Find a existing student info.\n");
    printf("3.Display the list of all student in the course.\n");
    printf("4.Exit\n");


    while(1){
             printf("Press the task number to perform.\n");
             scanf("%d",&i);

             switch (i){
                    case 1:
                         printf("How many students you want to enter:\t");
                         scanf("%d",&c);
                         addstudent(c);
                         break;

                    case 2:
                         printf("Existing Student ID:\t");
                         scanf("%d",&c);
                         searchStudent(c);
                         break;

                    case 3 :
                         displayStudentList();
                         break;

                    case 4:
                         flag =1;
                         break;

                    defeault:
                             break;
                    }//switch

                    if(flag==1) break;
             } //while
             return 0;
 }

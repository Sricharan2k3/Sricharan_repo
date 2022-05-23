#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    int rno;
    char name[30];
    char branch[5];
}student;
int i,n;
student *p;
void insert()
{

    FILE *fp;

    printf("Enter number of students :  ");
    scanf("%d",&n);

    p=(student*)malloc(n*sizeof(student));
    fp=fopen("Sample.txt","w");

    for(i=0;i<n;i++)
    {
        printf("Enter Roll No : ");
        scanf("%d",&p[i]);
        printf("Enter name : ");
        scanf("%s",p[i].name);
        printf("Enter branch : ");
        scanf("%s",p[i].branch);
    }

        for(i=0;i<n;i++)
        fprintf(fp,"%d,%s,%s\n",(p+i)->rno,(p+i)->name,(p+i)->branch);

}

void search()
{
    int i=0,a;
    char ch,rno[5];
    FILE *fp;
    printf("Enter Roll No to search : ");
    scanf("%s",rno);

    ch=fgetc(fp);
    while(ch!=EOF)
    {        printf("%s",rno[i]);
        i++;
    }


}

void display()
{
    for(i=0;i<n;i++)
    {
        {
            printf("%d,%s,%s\n",p[i].rno,p[i].name,p[i].branch);
        }
    }

}
int main()
{
    int ch;
    do{
        printf("\n 1. INSERT STUDENT RECORD");
        printf("\n 2. SEARCH STUDENT RECORD");
        printf("\n 3. DISPLAY RECORD");
        printf("\n 0. EXIT");

        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch(ch){
        case 1:
        insert();
        break;
        case 2:
        search();
        break;
        case 3:
        display();
        break;
        }
    }while(ch!=0);
    return 0;
}

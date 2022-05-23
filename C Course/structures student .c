#include<stdio.h>
#include<stdlib.h>
struct student
    {
        char name[25];
        int rollno;
        int Hno;
        int contact;
        char street[100];
        char city[30];


    };

int initialize(struct student*,int n);
int display(struct student*, int n);
void main()
{

    int n,i;
    struct student *p;
    printf("Enter number of students\n");
    scanf("%d",&n);

    p=(struct student*)malloc(n*sizeof(struct student));
    initialize(p,n);
    display(p,n);

}



int initialize(struct student *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter name of the student\n");
    scanf("%s",p[i].name);
    printf("Enter roll no of student\n");
    scanf("%d",&p[i].rollno);
    printf("Enter H.No of student\n");
    scanf("%d",&p[i].Hno);
    printf("Enter contact number of student\n");
    scanf("%d",&p[i].contact);
    printf("Enter street of the student\n");
    scanf("%s",p[i].street);
    printf("Enter city of the student\n");
    scanf("%s", p[i].city);
    }
}

int display(struct student *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Name: %s\n",p[i].name);
        printf("Roll No: %d\n",p[i].rollno);
        printf("H No: %d\n",p[i].Hno);
        printf("Contact: %d\n",p[i].contact);
        printf("Street: %s\n",p[i].street);
        printf("City: %s\n\n",p[i].city);
    }
}

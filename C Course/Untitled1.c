// Attendance of a class using static int.

#include<stdio.h>
int rollcall();
void main()
{
    int i,n;
    printf("Enter total number of students in class: ");
    scanf("%d", &n);
    printf("Answer your attendance\n");
    for(i=1;i<=n;i++)
    {
        rollcall();
    }
}
int rollcall()
{

    int a;
    char p;
    static int count=0;
    count=count+1;
    printf("Roll no %d\n", count);
    //Mark as P if present and A if absent
    scanf("%c\n", &p);
}

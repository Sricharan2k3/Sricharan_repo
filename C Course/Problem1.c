#include<stdio.h>
int n,*a;
int marks();
void main()
{
    int k;
    printf("Enter number of students\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));

    {
       k=marks();
       printf("%d is marks",k);
    }
}
int marks()
{
    int c1,j,i,sum;
    printf("Enter Roll Numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    for(i=0;i<n;i++)
    {
        printf("Enter marks obtained by %d roll number in following courses\n",*(a+i));
        {
           for(j=1;j<=5;j++)
           {
               c1=0;
               printf("Enter marks in course %d\n",j);
               scanf("%d",&c1);
               printf("Marks obtained by roll no %d in course %d is %d\n",*(a+i),j,c1);
               sum=sum+c1;
           }

           return sum;
        }

    }

}

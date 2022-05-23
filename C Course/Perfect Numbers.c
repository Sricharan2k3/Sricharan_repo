#include<stdio.h>
void main()
{
    int n,i,j,sum;
    scanf("%d" , &n);
    printf(" perfect number from 1 to %d are", n);
    for(i=2;i<=n;i++)
       {
           sum=0;
           for(j=1; j=i/2; j++)
           {
               if (i%j=0)
               {
                   sum=sum+j;
               }

           }
           if(sum+1==i)
           {
               printf("%d)", i);
           }
       }





}
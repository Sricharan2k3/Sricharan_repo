#include<stdio.h>
#include<math.h>
void main()
{   float sum,sum1,sum2;
    float r,x,k,f,l,m,y;
    int i,th,j;
    printf("Enter value of angle in degrees\n");
    scanf("%d", &th);
    r=th*3.14159/180;
    printf("Value of angle in radians is %f\n", r);
    f=1; sum=0; sum1=0; m=1;
    for(i=0;i<=25;i=i+2)
    {
      k= pow(r,2*i+1);
         for(j=1; j<=2*i+1; j++)
         {
             f=f*j;
         }
      x=k/f;

      sum=sum+x;
     }

    for(i=1;i<=25;i=i+2)
    {
      l= pow(r,2*i+1);
         for(j=1; j<=2*i+1; j++)
         {
             m=m*j;
         }
      y=l/m;

      sum1=sum1+y;
    }
    sum2=sum-sum1;
    printf("Result is %0.4f\n", sum2);
}

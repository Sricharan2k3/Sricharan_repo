#include<stdio.h>
void main()
{
    int m,n,i,*a,c,j,k=0;
    printf("Enter starting values\n");
    scanf("%d",&m);
    printf("Enter last value\n");
    scanf("%d",&n);

    for(i=m;i<n;i++)
    {
        c=0;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            k++;

        }
    }
    printf("Prime numbers between %d and %d are\n",m,n);
    a=(int*)malloc(k*sizeof(int));
    for(i=m;i<n;i++)
    {
        *(a+i)=i;
        c=0;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {

            printf("%d\n",*(a+i));
        }
    }
}

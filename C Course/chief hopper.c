#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,*a;
    float NE=0,BE;

    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }

    for(i=n-1;i>=0;i--)
    {
        BE=(NE+a[i])/2;
        NE=floor(BE)+1;
    }
    printf("%d\n",NE);
}


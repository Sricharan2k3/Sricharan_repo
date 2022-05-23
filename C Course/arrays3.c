#include<stdio.h>
void main()
{
    int a[10],i,n,max,min;
    printf("Enter number of values within 10\n");
    scanf("%d", &n);
    printf("Enter the values \n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    min=max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
        else if(a[i]> max)
            max=a[i];
    }
    printf("Max is %d and Min is %d",max,min);
}

#include<stdio.h>
void main()
{
    int a[10], i,n,s=0;
    printf("Enter the number of values upto 10\n");
    scanf("%d", &n);
    printf("Enter %d values\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }

    printf("\nThe sum of %d elements that you have provided is %d", n,s);
}

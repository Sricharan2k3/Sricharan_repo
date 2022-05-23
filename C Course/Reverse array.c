#include<stdio.h>
void main()
{
    int a[20],i, n;
    printf("Enter size of array within 20\n");
    scanf("%d", &n);
    printf("Enter array values\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }
    printf("Array values after reversing are\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d\n", a[i]);
    }

}

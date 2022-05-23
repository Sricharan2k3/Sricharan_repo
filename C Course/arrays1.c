#include <stdio.h>
void main()
{
    int a[10], i, n;
    printf("Enter number of values --upto 10\n");
    scanf("%d", &n);

    printf("Enter %d values\n", n);

    for(i=0;i<n;i++)
    {

    scanf("%d\n", &a[i]);

    }

    printf("You have entered the following values\n");
    for(i=0; i<=n; i++)
    {
        printf("%d \n", a[i] );
    }
}

#include<stdio.h>
void main()
{
    int a[20], size,key,flag=0,i;
    printf("Enter size of array\n");
    scanf("%d", &size);
    printf("Enter array elements\n");
    for(i=0; i<=size; i++ )
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key element you wanted to search\n");
    scanf("%d", &key);
    for(i=0; i<=size; i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("Element found at %d position\n", i);
    }

    else
    {
        printf("Sorry.....element NOT found\n");
    }
}

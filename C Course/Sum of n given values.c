#include <stdio.h>
 
 int main()
 {
    int i,n,a,sum;
    char ch;
    sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {  printf("Enter %cvalue\n",ch);
       scanf("%d", &a);
        sum=sum+a;
    }
    printf("Sum is %d", sum);
 }
 
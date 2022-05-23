#include<stdio.h>
void main()
{
    int i,n,r,rem,s,k,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter number of rotations\n");
    scanf("%d",&r);
    k=n;
    do
    {
    n = n/10;
    ++c;
    } while (n != 0);
    for(i=0;i<r;i++)
    {
        s=0;
        rem=k%10;
        s=rem*pow(10,c-1)+(k-rem)/10;
        k=s+1;
    }
    printf("Value after rotation is %d",k);
}

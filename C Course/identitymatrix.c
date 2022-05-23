#include<stdio.h>
void main()
{
    int a[10][10],i,j,ra,ca;
    printf("Enter number of rows in matrix A: ");
    scanf("%d", &ra);
    printf("Enter number of coloumns in matrix A: ");
    scanf("%d", &ca);
    for(i=0; i<=ra, i++)
    {
        for(j=0; j<=ca; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<=ra, i++)
    {
        for(j=0; j<=ca; j++)
        {
            printf("%d", a[i][j]);
        }
    }



}

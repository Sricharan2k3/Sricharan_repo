#include<stdio.h>
void main()
{
    int a[10][10],ra,ca,i,j;
    printf("Enter number of rows in matrix:  ");
    scanf("%d", &ra);

    printf("Enter number of coloumns in matrix:  ");
    scanf("%d", &ca);


    printf("Enter values of matrix\n");
    for(i=0; i<ra; i++)
    {
        for(j=0; j<ca; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix before transposing is as follows\n");
    for(i=0; i<ra; i++)
    {
        for(j=0; j<ca; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix after transposing is as follows\n");
    for(i=0; i<ca; i++)
    {
        for(j=0; j<ra; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

}

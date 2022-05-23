#include<stdio.h>
void transpose();
void main()
{
    int **a,r,c,i,j;
    printf("Enter no of rows and coloumns in matrix A\n");
    scanf("%d%d",&r,&c);
    a=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        *(a+i)=(int*)malloc(c*sizeof(int));
    }
    printf("Enter values\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Values entered by you are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    void transpose(int a,int r,int c);
    printf("Matrix after transposing is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
}
void transpose(int a,int r, int c)
{
    int temp,i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(a+j)+i);
            *(*(a+j)+i)=temp;
        }
    }
}

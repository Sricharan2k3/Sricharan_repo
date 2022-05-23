#include<stdio.h>
#include<stdlib.h>
void main()
{
    int ra, ca, rb, cb, i, j,**a,**b,**c;
    printf("Enter number of rows and coloumns in Matrix A\n");
    scanf("%d%d",&ra,&ca);
    printf("Enter number of rows and coloumns in Matrix B\n");
    scanf("%d%d",&rb,&cb);
    if(ra==rb && ca==cb)
    {
        a=(int**)malloc(ra*sizeof(int*));
        for(i=0;i<ra;i++)
        {
            *(a+i)=(int*)malloc(ca*sizeof(int));
        }

        printf("Enter values in matrix A\n");
        for(i=0; i<ra; i++)
        {
            for(j=0; j<ca; j++)
            {
                scanf("%d",*(a+i)+j);
            }
        }
        printf("Values entered are \n");
        for(i=0; i<ra; i++)
        {
            for(j=0; j<ca; j++)
            {
                printf("%d ",*(*(a+i)+j));
            }
            printf("\n");
        }

        b=(int**)malloc(rb*sizeof(int*));
        for(i=0;i<rb;i++)
        {
            *(b+i)=(int*)malloc(cb*sizeof(int));
        }

        printf("Enter values in matrix B\n");
        for(i=0; i<rb; i++)
        {
            for(j=0; j<cb; j++)
            {
                scanf("%d",*(b+i)+j);
            }
        }
        printf("Values entered are \n");
        for(i=0; i<rb; i++)
        {
            for(j=0; j<cb; j++)
            {
                printf("%d ",*(*(b+i)+j));
            }
            printf("\n");
        }

            c=(int**)malloc(rb*sizeof(int*));
        for(i=0;i<rb;i++)
        {
            *(c+i)=(int*)malloc(cb*sizeof(int));
        }

        printf("The sum of the given two matrices is\n");
        for(i=0; i<rb; i++)
        {
            for(j=0; j<cb; j++)
            {
                *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
                printf("%d ",*(*(c+i)+j));
            }
            printf("\n");
        }
    }
}


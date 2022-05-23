#include <stdio.h>
 
 void main()
{
    int i,j,k,l;
    printf("Enter number of lines \n");
    scanf("%d", l);
    for(i=1;i<=l;i++)
       {
           for ( j = 1; j < l; j++)
           {
               printf(" ");
           }
           
           for (k=1; k<=i; k++)
           {
               printf("*");
           }
       
       printf("\n");
       }

}
 

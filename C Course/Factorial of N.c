#include <stdio.h>
 
 void main()
 {
   int i,f,n;
   f=1;
   printf("Enter value of n \n");
   scanf("%d",&n);
   for(i=1; i<=n; ++i)
   {
       f=f*i;
   }
   printf("factorial of given number is %d",f);   
 }
 
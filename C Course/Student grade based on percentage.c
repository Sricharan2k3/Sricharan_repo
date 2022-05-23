#include <stdio.h>
 
void main()
 {
     int a;
     printf("Enter percentage of marks\n");
     scanf("%d", &a);
    if (a>=75)
    {
        printf("%d is Distinction", a);
    }
    else if (a>=65 && a<75)
    {
        printf("%d is First Class", a);
    }
    else if (a>=55 && a<65)
    {
        printf("%d is Second Class", a);
    }
    else if (a>=45 && a<55)
    {
        printf("%d is Third Class", a);
    }
    else
    {
        printf("%d is Fail", a);
    }
    
    
    
       
 }
 
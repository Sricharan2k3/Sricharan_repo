#include <stdio.h>
 
 int main(int argc, char const *argv[])
 {
     int age;
     
     printf("Enter your age\n");
     scanf("%d" , &age);

     switch (age)
     {
     case 3:
         printf(" the age is 3\n");
        break;
         
     case 27:
         printf(" the age is 27\n");
        break;
         
     
     default:
     printf("Nothing is your age\n");
         break;
     }
     return 0;  
 }
 
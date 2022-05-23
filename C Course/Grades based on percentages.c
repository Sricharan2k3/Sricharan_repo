#include <stdio.h>
 
 int main(int argc, char const *argv[])
 {
     int rank;

     printf("Enter your rank\n");
     scanf("%d", &rank);

     printf("You have entered %d as your rank\n", rank);

    if (rank<10)
    {
        printf("Your reward is 45");
    }

    else if (rank<20)
    {
        printf("Your reward is 15");
    }

    else if (rank>30)
    {
        printf("Your reward is 10");
    }
    
    
    
    
     
     
     return 0;  
 }
 
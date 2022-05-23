#include<stdio.h>
int factorial (int);
void main()
{
    int f,result;
    printf("Enter the number for which you want to find the factorial: ");
    scanf("%d", &f);
    result=factorial(f);
    printf("Factorial is %d", result);
}
int factorial (int a)
{
    if(a==1||a==0)
        return 1;
    else
        return (a*factorial (a-1));
}

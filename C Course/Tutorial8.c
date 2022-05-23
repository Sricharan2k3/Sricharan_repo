#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=0;
    int b=25;

    printf(" a + b= %d\n", a+b);
    printf(" a - b= %d\n", a-b);
    printf(" a * b= %d\n", a*b);
    printf(" a / b= %d\n", a/b);
    printf(" a&&b= %d\n", a&&b);
    printf(" a||b= %d\n", a||b);
    printf(" !(a&&b)= %d\n", !(a&&b));

    return 0;
}

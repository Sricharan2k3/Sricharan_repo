#include<stdio.h>
void main()
{
    char str[20]="H Y D E R A B A D 1";
    int i;
    printf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]==32)
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}

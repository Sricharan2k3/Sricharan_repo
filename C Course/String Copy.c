#include<stdio.h>
void main()
{
    char i=0;
    char str1[20]="Hello";
    printf("Before copying string is %s\n", str1);
    char str2[20]="Hyderabad";
    while(str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    printf("After copying string is %s\n", str1);
}

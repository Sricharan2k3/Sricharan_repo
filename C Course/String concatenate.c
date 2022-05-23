#include<stdio.h>
void main()
{
    char str1[20],str[20],str3[40];
    char i,j;
    i=0;j=0;
    printf("Enter your string 1 \n");
    scanf("%s",str1);
    printf("The entered string is %s\n", str1);
    printf("Enter your string 2 \n");
    scanf("%s",str2);
    printf("The entered string is %s\n", str2);
    while(str1[i]!='\0')
    {
        str3[j]=str1[i];
        j++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        j++;
        i++;
    }
    str3[j]='\0';
    printf("The concatenated string is %s\n", str3);
}

#include<stdio.h>
void main()
{
    int flag,a;
    char str[20],i;
    printf("Enter string\n");
    scanf("%s",str);
    printf("String entered is %s\n",str);
    a=strlen(str);
    while(str[i]!='\0')
    {
        if(str[i]!=str[a-i-1])
        {
          flag=1;
          break;
        }
        i++;
    }
    if(flag==1)
    {
        printf("Entered string is not a Palindrome\n");
    }
    else
    {
        printf("Entered string is a Palindrome\n");
    }
}

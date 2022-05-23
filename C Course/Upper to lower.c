#include<stdio.h>
void main()
{
    char str[20];
    int length,i;
    printf("Enter string\n");
    scanf("%s",str);
    printf("Sting entered by the user is %s\n",str);
    length=strlen(str);

    for(i=0;i<length;i++)
    {
        if(str[i]>=91&&str[i]<=128)
        {
            str[i]=str[i]-32;

        }
    }

    printf("%s\n",str);


    for(i=0;i<length;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }


    printf("%s",str);
}

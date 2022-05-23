#include<stdio.h>
void main()
{
    char str[20],i,j,a,b,c;
    char substr[20];
    printf("Input string\n");
    scanf("%s",str);
    printf("Entered string is %s\n", str);
    printf("Input substring\n");
    scanf("%s",substr);
    printf("Entered substring is %s\n", substr);
    a=strlen(str);
    b=strlen(substr);
    i=0;
    for(i=0;i<a;i++)
    {
        c=0;
        for(j=0;j<b;j++)
        {
            if(str[i+j]==substr[j])
            {
                c++;
            }
        }
        if(c==b)
        {
            printf("Yes it is a substring\n");
        }
    }
}

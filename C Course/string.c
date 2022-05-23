#include<stdio.h>
void main()
{
    char str[100]="H Y D E R A B A D 1 2 3";
    int i,a,count,l,k;
    count=0; k=0; l=0;
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        if(str[i]==' ')
        {
            count=count+1;
        }

        if(str[i]>='0'&& str[i]<='9')
        {
            l=l+1;
        }
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            k=k+1;
        }
    }
    printf("No of spaces in the given text is %d\n",count);
    printf("No of digits in the given text is %d\n", l);
    printf("No of alphabets in the given text is %d\n",k);
}

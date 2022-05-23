#include<stdio.h>
void main()
{
    int  i,j,count,a;
    char str[20]="helicopter";
    a=strlen(str);
    for(i='a';i<='z';++i)
    {

        count=1;
        for(j=0;j<a;j++)
        {
            if(i==str[j])
            {
                count=count+1;

            }

        }
         if(count>0)
        {
             printf(" %s =%d\n",str[j],count);
        }

    }

}

#include<stdio.h>
void main()
{
    char s[100];
    int i=0,j,l=0;
    printf("Enter your paragraph\n");
    scanf("%c",&s[i]);
    while(s[i]!=';'&&i<100)
    {
        i++;
        scanf("%c",&s[i]);
        l++;
    }

    printf("%d",l);
    printf("The paragraph entered by you is \n %s \n\n",s);



    printf("Paragraph after removing spaces is\n");
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            for(j=1;j<l;j++)
            {
                s[j]=s[j+1];
            }
            l--;
        }
    }
    printf("%s",s);

}

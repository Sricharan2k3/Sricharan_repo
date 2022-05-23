#include<stdio.h>
int main()
{
    FILE *fp;
    int i=0;
    char s[200];
    fp=fopen("Sample.txt","w");
    if(fp==NULL)
    {
        printf("file not found");
        return 0;
    }

    printf("Enter paragraph, press ; to stop inputing paragraph\n");
    scanf("%c",s[i]);

    while(s[i]=';')
    {
        fputc(s[i],fp);
        i++;
        scanf("%c",s[i]);


    }


    printf("Context copied successfully\n");
    fclose(fp);
}

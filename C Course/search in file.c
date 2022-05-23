#include<stdio.h>
int main()
{
    char ch,key;
    int i;
    FILE *fp;

    fp=fopen("Sample.txt","r");
    if(fp==NULL)
    {
        printf("FILE not found\n");
    }
    else
    {
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c", ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    }
}

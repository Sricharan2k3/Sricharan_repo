#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("Sample.txt", "r");
    if(fp==NULL)
        printf("FILE NOT FOUND\n");
    else
    {
        c=fgetc(fp);
        while(c!=EOF)
        {
            printf("%c",c);
            c=fgetc(fp);
        }
        printf("\n Read success");
        fclose(fp);
    }

}

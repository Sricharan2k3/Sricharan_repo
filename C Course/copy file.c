#include<stdio.h>
void main()
{
    char c;
    FILE *fp1,*fp2;
    fp1=fopen("sample1.txt","r");
    fp2=fopen("sample2.txt","w");
    if(fp1==NULL||fp2==NULL)
        printf("Sorry file not found");

    else
    {
        c=fgetc(fp1);
        while(c!=EOF)
        {
            fputc(c,fp2);
            c=fgetc(fp1);

        }
        printf("Successfully copied");
        fclose(fp1);
        fclose(fp2);


    }
}

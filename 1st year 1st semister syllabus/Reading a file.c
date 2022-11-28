
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]="JabirNayan";
    int length= strlen(name);
    int i;
    file= fopen("text.txt","w");
    if(file==0)
    {
        printf("File is doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);

        }
        printf("File is written successfully");
        fclose(file);

    }
    return 0;
}

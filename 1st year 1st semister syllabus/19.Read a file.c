#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file= fopen("test.txt","r");
    if(file==0)
    {
        printf("File is doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }
    return 0;
}


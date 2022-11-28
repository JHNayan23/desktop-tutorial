#include<stdio.h>
int main()
{
    FILE *file;
    file= fopen("test.txt","w");
    if(file==0)
    {
        printf("File is doesn't exist");
    }
    else
    {
        printf("File is opened");
        fclose(file);
    }
    return 0;
}

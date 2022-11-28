#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k;

    FILE *fptr;

    fptr = fopen("program.txt","r");

    if(fptr==NULL)
    {
         printf("Error ! opening file");
         exit(1);

    }

    for(int i=0; i<=10; i++)
    {
        fscanf(fptr,"%d\n",&k);
        fprintf("Element of file = %d\n",k);

    }
    fclose(fptr);

    return 0;
}

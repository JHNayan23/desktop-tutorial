#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;


    fptr = fopen("Shoili.txt","w");

    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    for (int i=1; i<=100; i++)
        if (i%2==1)
        {

            fprintf(fptr,"%d\n",i);

        }

    fclose(fptr);

    return 0;
}

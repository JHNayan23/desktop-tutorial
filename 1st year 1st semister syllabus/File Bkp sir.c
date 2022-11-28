#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    FILE *fptr1,*fptr2,*fptr3;

    if(((fptr1=fopen("Zisun.txt","r")) && (fptr2=fopen("Shoili.txt","r"))) == NULL)
    {
        printf("Error! file opening");
        exit(1);
    }

    fptr3=fopen("Somaya.txt","w");

    for(int i=1; i<=10; i++)
    {
        fscanf(fptr1,"%d",&x);
        fscanf(fptr2,"%d",&y);
        int sum=x+y;
        printf("Element of file = %d\n",sum);
        fprintf(fptr3,"%d\n",sum);
    }
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}

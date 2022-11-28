#include<stdio.h>
#include<string.h>
int main()
{
    char hajj[]="Hajj",umrah[]="Umrah",check[20],ter[]="*";
    int i=1;
    while(gets(check)!=EOF)
{
     if(strcmp(check,ter)==0)
    break;
     else if(strcmp(check,hajj)==0)
     printf("Case %d: Hajj-e-Akbar\n",i);
     else if(strcmp(check,umrah)==0)
    printf("Case %d: Hajj-e-Asghar\n",i);
    i++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;

   fp = fopen("example.txt","r");

   while((fp = getc(fp)) != EOF)
   {
       printf("%c", ch);
   }
    fclose(fp);

    return 0;
}

#include<stdio.h>
int main()
{
   char x;
    scanf("%c",&x);

   if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='O' || x== 'U')
    printf("vowel");
   else if((x>='a' && x<='z') || (x>='A' && x<='Z'))
    printf("consonant");
    else
        printf("Special Charater");
    return 0;
}

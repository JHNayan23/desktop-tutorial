
#include<stdio.h>
int main()
{
    int i=0,a,length,wide,left, right,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        length=((100*a)/20);
        wide =((60*a)/20);
        wide=(wide/2);
        left=((length*45)/100);
        right=((length*55)/100);
        printf("Case %d:\n",i);
        printf("%d %d\n",-left,wide);
        printf("%d %d\n",right,wide);
        printf("%d %d\n",right,-wide);
        printf("%d %d\n",-left,-wide);
    }

    return 0;

}

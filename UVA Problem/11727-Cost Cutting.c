#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        printf("Case %d: ", i);
        if ((x >= y&&x <= z) || (x >= z&&x <= y))
            printf("%d\n", x);
        else if ((y >= x&&y <= z) || (y >= z&&y <= x))
            printf("%d\n", y);
        else if ((z >= y&&z <= x) || (z >= x&&z <= y))
            printf("%d\n", z);
    }

    return 0;

}

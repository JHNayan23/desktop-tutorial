#include<bits/stdc++.h>

using namespace std;

int main()

 {
    int initi, c1, c2, c3, ans;

    while (scanf("%d %d %d %d", &initi, &c1, &c2, &c3)==4)

     {
         if(initi==0 && c1==0 && c2==0 && c3==0)

         {
             break;
         }

        ans = 0;
        ans += (initi - c1) > 0 ? (initi - c1) * 9 : (initi - c1 + 40) * 9;
        ans += (c2 - c1) > 0 ? (c2 - c1) * 9 : (c2 - c1 + 40) * 9;
        ans += (c2 - c3) > 0 ? (c2 - c3) * 9 : (c2 - c3 + 40) * 9;
        ans=ans+1080;
        printf("%d\n", ans);

    }

    return 0;


}

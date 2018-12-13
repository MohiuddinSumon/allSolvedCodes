#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%d",&n)
#define s4(n,m,o,p) scanf("%d%d%d%d",&n,&m,&o,&p)
#define s2(n,m) scanf("%d%d",&n,&m)
#define pf printf

int main()
{
    int testCase,cowCase,x,y,x1,y1,x2,y2;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s4(x1,y1,x2,y2);
        s(cowCase);
        pf("Case %d:\n",i);
        for(int j=0; j<cowCase; j++)
        {
            s2(x,y);
            if(x>x1&&x<x2 && y>y1&&y<y2)
                pf("Yes\n");
            else
                pf("No\n");
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s4(n,m,o,p,q,r) scanf("%d%d%d%d%d%d",&n,&m,&o,&p,&q,&r)
#define pf printf

int main()
{
    int x,y,ax,ay,bx,by,cx,cy,testCase,area,a,b;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s4(ax,ay,bx,by,cx,cy);
        x=(cx-bx)+ax;
        y=(cy-by)+ay;
        area=(((ax-bx)*(ay-y))-((ax-x)*(ay-by)));
        area=abs(area);
        pf("Case %d: %d %d %d\n",i,x,y,area); }


    return 0;
}

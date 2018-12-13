#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int testCase,radius,lx,ly,rx,ry,length,width;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s(radius);
        length = 5*radius;
        width = 3*radius;
        lx=(55*length)/100;
        rx=length-lx;
        ly=ry=(width>>1);

        pf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",i,rx,ly,lx,ry,lx,ly,rx,ry);

    }



    return 0;
}

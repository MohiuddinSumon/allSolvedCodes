#include<bits/stdc++.h>
using namespace std;

#define s1(n) scanf("%d",&n)
#define s3(n,m,o) scanf("%lf%lf%lf",&n,&m,&o)
#define pf printf

int main()
{
    int testCase;
    double d,v,u;
    s1(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s3(d,v,u);
        if(u==0 || v>=u || v==0)
            pf("Case %d: can't determine\n",i);
        else
            pf("Case %d: %.3f\n",i,abs((d/u)-(d/(sqrt(u*u - v*v)))));
    }


    return 0;
}

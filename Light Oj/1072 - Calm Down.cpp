#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%lf%d",&n,&m)
#define pf printf

int main()
{
    int testCase,n;
    double R,r,a;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s2(R,n);
        a=sin(6.2831853/(2*n));
        r=(a*R)/(1+a);
        n=r;
        (n==r) ? pf("Case %d: %d\n",i,n) : pf("Case %d: %.9f\n",i,r);
    }

    return 0;
}

//sin((360/2*n)*(pi/180))=r/(R-r);

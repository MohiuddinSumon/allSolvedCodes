#include<iostream>
#include<cstdio>

#define s(n) scanf("%d",&n)
#define sl(n,m) scanf("%lf%lf",&n,&m)
#define pf printf

using namespace std;

int main()
{
    int testCase;
    double newCel,cel,fer;
    s(testCase);

    for(int i=1; i<=testCase; i++)
    {
        sl(cel,fer);
        newCel = ((5*(fer-32))/9.00)+17.777779;
        pf("Case %d: %.2lf\n",i,newCel+cel);
    }
    return 0;
}

#include<iostream>
#include<cstdio>

#define sl(n,m) scanf("%lf%lf",&n,&m)
#define s(k) scanf("%d",&k)
#define sll(x) scanf("%lf",&x)

#define pf printf

using namespace std;

int main()
{
    int testcase,n;
    double a0,a2,c1,c2;
    s(testcase);
    for(int i=0; i<testcase; i++)
    {
        s(n);
        sl(a0,a2);
        sll(c1);
        for(int j=0; j<n-1; j++)
        {
            sll(c2);
        }
        pf("%.2lf\n",((a0+a2)/2)-c1);

    }



    return 0;
}

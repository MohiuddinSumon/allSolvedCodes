#include<bits/stdc++.h>

#define s1(n) scanf("%d",&n)
#define s(m,n,o) scanf("%d%d%d",&m,&n,&o)
#define pf printf

int main()
{
    int testCase,a,b,c;
    double total;
    s1(testCase);
    while(testCase--)
    {
        s(a,b,c);
        total=(double)c/(a+b);
        (a>b) ? a+=abs(a-b) : a-=abs(a-b);
        total*=a;
        pf("%.f\n",total);
    }

    return 0;
}

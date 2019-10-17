#include<iostream>
#include<cstdio>

#define s(n) scanf("%d",&n)
#define sl(m) scanf("%lld",&m)
#define pf printf

int main()
{
    int testCase,i;
    long long int a,b;
    s(testCase);
    for(i=1; i<=testCase; i++)
    {
        a=1;
        sl(b);
        while(b%2 == 0)
        {
            b/=2;
            a*=2;
        }

        (a==1)?pf("Case %d: Impossible\n",i):pf("Case %d: %lld %lld\n",i,b,a);

    }

    return 0;
}


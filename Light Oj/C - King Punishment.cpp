#include<iostream>
#include<cstdio>

#define s(k) scanf("%d",&k)


#define pf printf

using namespace std;

int main()
{
    int testCase,n;
    s(testCase);
    for(int i=1;i<=testCase; i++)
    {
        s(n);
        int a=1;
        while(n!=1)
        {
            n/=2;
            a*=2;
        }
        pf("Case %d: %d\n",i,a);
    }

    return 0;
}

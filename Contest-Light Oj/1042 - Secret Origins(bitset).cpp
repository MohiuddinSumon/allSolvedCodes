#include<bits/stdc++.h>
#include<bitset>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int testCase,a,b,c,acount,bcount;
    bitset<32> bit;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        acount=bcount=0;
        s(a);
        b=a+1;
        bit=a;
        acount=bit.count();
        bit=b;
        while(bcount!=acount)
        {
            bcount=bit.count();
            b++;
            bit=b;
        }
        b--;
        pf("Case %d: %d\n",i,b);

    }
    return 0;
}

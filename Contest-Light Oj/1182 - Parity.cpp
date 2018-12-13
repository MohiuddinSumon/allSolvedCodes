#include<bits/stdc++.h>
using namespace std;
#include<bitset>

#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int testCase,number,party;
    bitset<32> bit;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s(number);
        bit=number;
        (bit.count()%2==0) ? pf("Case %d: even\n",i) : pf("Case %d: odd\n",i);
        bit.reset();
    }

    return 0;
}

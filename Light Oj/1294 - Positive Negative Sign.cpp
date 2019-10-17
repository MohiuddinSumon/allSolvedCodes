#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=1; i<=n; i++)
#define aforb(a,b) for(int i=a; i<=b; i++)
#define pf printf
#define ll long long
#define ull unsigned ll
#define MOD 1000000007
#define pub push_back
#define pob pop_back
#define mem(a,v) memset(a,v,sizeof(a))
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define multimod2(a,b) ((a%MOD)*(b%MOD))%MOD
#define multimod3(a,b,c) ((a%MOD)*(b%MOD)*(c%MOD))%MOD

#define s2(n,m) scanf("%d%d",&n,&m)

#define M 1000000000



int main()
{
    int test,result,a,sn;
    ll n,m;
    s(test);
    sfor(test)
    {
        s2(n,m);
        pf("Case %d: %lld\n",i,(n*m)/2);
    }



    return 0;
}



//sn=(n*(2*a1+n-1))/2;

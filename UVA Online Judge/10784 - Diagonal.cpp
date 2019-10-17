#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%lld",&n)
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
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define s2(n,m) scanf("d",&n,&m)

int main()
{
    ll d,n;
    int x=1;

    while(s(d)==1 && d!=0)
    {
        n=(3+(sqrt(9+(8*d))))/2;
        //cout<<n<<endl;
        if((((n*n)-3*n)/2)<d)n++;
        pf("Case %d: %lld\n",x++,n);
    }



    return 0;
}

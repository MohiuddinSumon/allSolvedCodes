#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=0; i<n; ++i)
#define aforb(a,b) for(int i=a; i<=b; ++i)
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
    int tc,a,b,c,d;
    double x,y;
    s(tc);
    for(int i=1; i<=tc; ++i)
    {
        cin>>a>>b>>x>>c>>d;
        y=sqrt(( (c-a)*(c-a)) + ((d-b)*(d-b)));
        if(y>x) pf("Case %d: Outside\n",i);
        else if(y==x) pf("Case %d: OnCircle\n",i);
        else pf("Case %d: Inside\n",i);
    }



    return 0;
}

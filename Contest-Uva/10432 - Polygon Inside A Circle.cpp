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
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define Pi acos(-1)
#define s2(n,m) scanf("%lf %lf",&n,&m)



int main()
{
    double n,r,area;
    //cout<<std::numeric_limits<double>::max()<<endl;
    while(s2(r,n)==2)
    {
        area=((n*r*r)*sin((2*Pi)/n))/2;
        pf("%.3f\n",area);
    }


    return 0;
}

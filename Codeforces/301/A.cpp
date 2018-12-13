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
    int n,res=0;
    char a[1000],b[1000];
    s(n);
    cin>>a>>b;
    sfor(n)
    {
        int x=(a[i]-'0');
        int y=(b[i]-'0');
        int g;
        g=MIN((10+min(x,y)-max(x,y)),(abs(x-y)));
        //cout<<"g = "<<g<<endl;
        res+=g;
        //cout<<x<<' '<<y<<endl;
    }
    cout<<res<<endl;



    return 0;
}

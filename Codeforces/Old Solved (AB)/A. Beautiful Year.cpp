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
    int a,b,c,d,all;
    while(s(all)==1)
    {
        all++;
        a=all/1000;
        all-=a*1000;
        b=all/100;
        all-=b*100;
        c=all/10;
        all-=c*10;
        d=all;

        //cout<<a<<b<<c<<d<<endl;

        while(d==a||d==b||d==c){d++;if(d>=10)c+=(d/10),d%=10;}
        while(c==a||c==b||c==d){c++;if(c>=10)b+=(c/10),c%=10;}
        while(b==a||b==c||b==d){b++;if(b>=10)a+=(b/10),b%=10;}
        while(a==b||a==c||a==d)a++;

        cout<<a<<b<<c<<d<<endl;

    }

    return 0;
}

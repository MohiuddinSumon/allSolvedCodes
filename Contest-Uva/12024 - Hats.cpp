#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("d",&n,&m)
#define s3(n,m,o) scanf("d%d",&n,&m,&o)
#define sfor(n) for(int i=1; i<=n; i++)
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

ull fn[21],dn[21];

ull fact(int n)
{
    if(n==0 || n==1) return 1;
    if(fn[n] !=0 ) return fn[n];
    else
    {
        fn[n]=n*fact(n-1);
        return fn[n];
    }
}

ull derangement(int n)
{
    if(n==0 || n==1) return 0;
    if(n == 2) return 1;
    if( dn[n] != 0) return dn[n];
    else
    {
        dn[n]= (n-1)*(derangement(n-1)+derangement(n-2));
        return dn[n];
    }

}



int main()
{
    int n,test;

    mem(fn,0);
    mem(dn,0);
    fact(20);
    derangement(20);
    dn[2]=1;
    s(test);
    while(test--)
    {
        s(n);
        pf("%lld/%lld\n",dn[n],fn[n]);
    }



    return 0;
}

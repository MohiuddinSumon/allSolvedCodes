#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%d%d",&n,&m)
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
#define M 214748367

int fibo_dp[M+1];

int fibo(int n, int m)
{
    if(n==0) return 0;
    if(n == 1) return 1;
    if(fibo_dp[n] != 0) return fibo_dp[n];
    else
    {
        fibo_dp[n]=(((fibo(n-1,m)%m)+((fibo(n-2,m)%m)))%m);
        return fibo_dp[n];
    }
}

int main()
{

    int m,n;
    while(s2(n,m)==2)
    {
        mem(fibo_dp,0);
        fibo_dp[1]=1;
        m=pow(2,m);
        pf("%d\n",fibo(n,m));
    }


    return 0;
}

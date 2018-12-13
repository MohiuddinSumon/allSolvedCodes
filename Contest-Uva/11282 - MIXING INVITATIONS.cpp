#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%d%d",&n,&m)
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

ull dn[21];
ull nCr_dp[22][22];

ull derangement(int n)
{
    if(n==0 || n==1 ) return 0;
    if (n==2) return 1;
    if(dn[n] != 0)return dn[n];
    else
    {
        dn[n]=(n-1)*(derangement(n-1)+derangement(n-2));
        return dn[n];
    }
}

ull  nCr(int n, int r)
{

    if(r == n){nCr_dp[n][r]=1; return 1;}
    if(r == 0){nCr_dp[n][r]=1;}
    if(r == 1){nCr_dp[n][r]=n; return n;}
    if(nCr_dp[n][r] != 0) return nCr_dp[n][r];
    else
    {
        nCr_dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
        return nCr_dp[n][r];
    }
}

int main()
{
    mem(dn,0);
    mem(nCr_dp,0);

    derangement(20);
    dn[2]=dn[0]=1;

     for(int i=0; i<21; i++)
        {
            for(int j=0; j<=i; j++)
                nCr(i,j);
        }

    int n,m;
    ull sum;
    cout<<dn[12]<<endl;
    while(s2(n,m)==2)
    {
        //cout<<nCr_dp[n][m]<<endl;
        sum=0;
        for(int i=0; i<=m; i++)
        {
           // cout<<nCr_dp[n][i]<<' '<<dn[n-i]<<endl;
            sum += nCr_dp[n][i]*dn[n-i];
        }

        cout<<sum<<endl;
    }



    return 0;
}

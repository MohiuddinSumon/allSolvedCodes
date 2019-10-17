#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%d%d",&n,&m)
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

#define M 5000000
int phi[M+1];
ull dp[M+1];
void calcPhi()
{

    for(int i=2; i<=M; i++) phi[i]=i;
    for(int i=2; i<=M; i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=M; j+=i)
                phi[j] -= (phi[j]/i);
        }
    }
}
ull result;
void ddpp()
{
     for(int i=2; i<=M; i++)
    {
        dp[i]=phi[i]*phi[i];
        dp[i]+=dp[i-1];

    }
}

int main()
{
    mem(phi,0);
    calcPhi();
    ddpp();

    int test,a,b;
    s(test);
    sfor(test)
    {
        s2(a,b);
        pf("Case %d: %llu\n",i,dp[b]-dp[a-1]);
    }


    return 0;
}



//
//#define M 5000000
//int phi[M+1]={ };
//ull dp[M+1];
//void calcPhi()
//{
//
//    for(int i=2; i<=M; i++) phi[i]=i;
//    for(int i=2; i<=M; i++)
//    {
//        if(phi[i]==i)
//        {
//            for(int j=i; j<=M; j+=i)
//                phi[j] -= (phi[j]/i);
//        }
//    }
//    for(int i=2; i<=M; i++)
//    {
//        dp[i]=(ull)phi[i]*(ull)phi[i];
//        dp[i]+=dp[i-1];
//    }
//}
//
//
//int main()
//{
//    mem(phi,0);
//    calcPhi();
//
//    int test,a,b;
//    s(test);
//    sfor(test)
//    {
//        s2(a,b);
//        pf("Case %d: %llu\n",i,dp[b]-dp[a-1]);
//    }
//
//
//    return 0;
//}


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
#define s2(n,m) scanf("%d%d",&n,&m)
int cost[1002];
int weight[1002];
int cap[102];
int dp[1002][32];
int capacity;
int gc;//total goods

int greedy(int i, int w)
{
    if(i==gc)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int pro1=0,pro2=0;
    if(w+weight[i]<=capacity)
        pro1=cost[i]+greedy(i+1,w+weight[i]);

    pro2=greedy(i+1,w);

    dp[i][w]=MAX(pro1,pro2);

    return dp[i][w];
}



int main()
{
    int val,tc,gn;
    s(tc);
    while(tc--)
    {
        val=0;
        s(gc);
        sfor(gc)
        {
            s2(cost[i],weight[i]);
        }
        s(gn);
        sfor(gn)s(cap[i]);

        sfor(gn)
        {
            capacity=cap[i];
            mem(dp,-1);

            //cout<<capacity<<' '<<greedy(0,0)<<endl;
            val+=greedy(0,0);
        }
        pf("%d\n",val);




    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
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

#define N 1000000
int status[N+1];
int digitPrime[N+1];
int dp[N+1];


int main()
{
    mem(status,0);
    mem(digitPrime,0);
    dp[0]=0;
    status[0]=status[1]=1;
    int sqrtN = int( sqrt( (double) N));

    for(int i=0; i<=N; i++)
    {
        if(status[i]==0)
        {
            for(int j= 2*i; j<=N; j +=i)
            {
                status[j]=1;
            }
        }
    }
    int temp,in;
    for(int i=0;i<=N; i++)
    digitPrime[i]=status[i];
  //   cout<<digitPrime[13]<<endl;


    for(int i=10; i<=N; i++)
    {

        if(status[i] == 0)
        {
            temp=0;
            in=i;
            while(in)
            {
                temp+=(in%10);
                in /= 10;
            }
          //  cout<<i<<' '<<temp<<endl;
            if(status[temp] != 0) digitPrime[i]=1;
        }
    }


    // cout<<digitPrime[13]<<endl;

    for(int i=1; i<=N; i++)
    {

        if(digitPrime[i] == 0) dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
        //getchar();
    }

    int test,t1,t2;
    s(test);
    while(test--)
    {

        scanf("%d%d",&t1,&t2);
        pf("%d\n",dp[t2]-dp[t1-1]);
    }


    return 0;
}

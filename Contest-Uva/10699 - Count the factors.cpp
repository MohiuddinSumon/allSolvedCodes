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
#define s2(n,m) scanf("d",&n,&m)

#define M 1000000
bool test[M+1]={ };
vector<int>prime;
int factsize;
set<int> pfact;

void siv()
{
    for(int i=2; i*i<=M; ++i)
    {
        if(!test[i])
        {
            for(int j=i; i*j<=M; ++j)
                test[i*j]=true;
        }
    }

    for(int i=2; i<=M; ++i)
        if(!test[i]) prime.pub(i);

}

void primefact(int n)
{
    factsize=0;
    int sqrtN = int (sqrt( (double) n));
    for(int i=0; prime[i]<=sqrtN; ++i)
    {
        if(n%prime[i] == 0)
        {
            while(n%prime[i] == 0)
            {
                //cout<<prime[i]<<endl;
                n /= prime[i];
                pfact.insert(prime[i]);
            }
        }
    }
    if(n>1) pfact.insert(n);

    factsize=pfact.size();
    pfact.clear();
}

int main()
{
    siv();
    int n;
    while(s(n) && n!=0)
    {
        primefact(n);
        pf("%d : %d\n",n,factsize);
    }


    return 0;
}

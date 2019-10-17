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

#define s2(n,m) scanf("%d%d",&n,&m)

int parent[50001] = { };
set<int> religions;

void makeparent(int n)
{
    for(int i=1; i<=n; ++i)
        parent[i]=i;
}

int findparent(int a)
{
    if(parent[a]==a) return a;
    else return parent[a]=findparent(parent[a]);
}

void makefriend(int a, int b)
{
    int u=findparent(a);
    int v=findparent(b);

    if(u!=v)
    {
        parent[v]=u;

    }
}


int main()
{
    int n,m,a,b,i=1;
    while(s2(n,m)==2 && n!=0)
    {
        makeparent(n);
        sfor(m)
        {
            s2(a,b);
            makefriend(a,b);
        }
        sfor(n)
        {
            religions.insert(findparent(i));
        }
        pf("Case %d: %d\n",i,religions.size());
        ++i;
        religions.clear();

    }


    return 0;
}

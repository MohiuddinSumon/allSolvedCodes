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

struct edge
{
    int u,v;
    double w;

    bool operator < ( const edge &p) const
    {
        return w<p.w;
    }
};

int parent[100];
vector<edge> e;
int findpr(int n)
{
    return (parent[n] == n) ? n : parent[n]=findpr(parent[n]);
}

int mst()
{
    sort(e.begin(),e.end());
    for(int i=1; i<e.size(); ++i)
        parent[i]=i;

    int count=0,siz;
    double s=0;
    siz=e.size();
    for(int i=0;i<siz; ++i)
    {
        int u=findpr(e[i].u);
        int v=findpr(e[i].v);
        if(u!=v)
        {
            parent[u]=v;
            count++;
            s+=e[i].w;
            if(count==n-1)break;
        }
    }
    return s;
}

int main()
{
    int test,a,b;
    double c;
    s(test);
    while(test--)
    {
        s2(a,b);
        c=
    }



    return 0;
}

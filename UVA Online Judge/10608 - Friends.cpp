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

int parent[30001]={};
map<int,int> friends;
void makeparent(int n)
{
    for(int i=1; i<=n; ++i)
        {
            parent[i]=i;
            friends[i]=0;
        }
}

int findparent(int a)
{
    if(parent[a]==a)return a;
    else
    {
        return parent[a]=findparent(parent[a]);
    }
}

void makefriend(int a, int b)
{
    int u = findparent(a);
    int v = findparent(b);
    if(u!=v)
        parent[u]=v;
   // else cout<<"They are friends"<<endl;
}

int findMaxGrp(int n)
{
    int vmax=1;
    for(int i=1; i<=n; ++i)
    {
        friends[findparent(i)]++;
        if(friends[parent[i]]>vmax)
        vmax=friends[parent[i]];
    }

    return vmax;

}

int main()
{
    int test,n,m,a,b;
    s(test);
    while(test--)
    {
        s2(n,m);
        makeparent(n);
        sfor(m)
        {
            s2(a,b);
            makefriend(a,b);
           // cout<<findparent(a)<<' '<<parent[a]<<endl;
        }
//        sfor(n)cout<<parent[i]<<endl;
//        sfor(n)findparent(i);
//        sfor(n)cout<<parent[i]<<endl;

        pf("%d\n",findMaxGrp(n));

    }



    return 0;
}

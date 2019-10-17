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
#define s2(n,m) scanf("%d%d",&n,&m)



int parent[5010];
int sum[5010];

map<string,int> nature;
int n;
void makeparent()
{
    sfor(n){
         parent[i]=i;
         sum[i]=1;
    }
}

int findparent(int a)
{
    if(parent[a]!=a) parent[a]=findparent(parent[a]);
    return parent[a];
}

void makefriend(int a, int b)
{
    int u = findparent(a);
    int v = findparent(b);
    if(u!=v){
            parent[u]=v;
            sum[v]+=sum[u];
    }
}

int maxgrp()
{
    int vmax=0;

    sfor(n) vmax=MAX(sum[i],vmax);
    return vmax;
}

int main()
{
    //vstr.pub("a");
    int r,index;
    string str,ptr;
    while(s2(n,r)==2 && n!=0)
    {
        index=0;
        makeparent();
        sfor(n)
        {
            cin>>str;
            nature[str]=i;
            //vstr.pub(str);
            //if(!nature[str]) nature[str] = ++index;
        }

        sfor(r)
        {
            cin>>str>>ptr;
            makefriend(nature[str],nature[ptr]);
        }
       // maxgrp();

        pf("%d\n",maxgrp());


    }



    return 0;
}

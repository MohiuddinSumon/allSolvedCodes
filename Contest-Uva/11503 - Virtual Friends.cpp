//The trick is to cache the sum to avoid iteration over the disjoint set multiple times

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

#define s2(n,m) scanf("d",&n,&m)
int parent[100010];
int sum[100010];
map<string,int> name;

void makeparent(int n)
{

    sfor(100010) {
        sum[i]=1;
        parent[i]=i;
    }
}

int findparent(int n)
{
    if(parent[n]!=n)parent[n]=findparent(parent[n]);
    return parent[n];
}

void makefriend(int a,int b)
{
    //cout<<sum[u]<<' '<<sum[v];
    int u = findparent(a);
    int v = findparent(b);
//    if(sum[u]==-1)sum[u]*=-1;
//    if(sum[v]==-1)sum[v]*=-1;


  //  cout<<sum[u]<<' '<<sum[v]<<endl;
    //cout<<u<<' '<<v<<endl;
    if(u!=v)
    {
        parent[v] = u;
        sum[u] += sum[v];
    }
    pf("%d\n",sum[u]);
}



int main()
{

    int tc,n,index;
    string n1,n2;

    s(tc);
    while(tc--)
    {
        //mem(sum,-1);
        name.clear();
        index=0;
        s(n);
        makeparent(n);
        sfor(n)
        {
            cin>>n1>>n2;
            //name[n1]=name[n2]=i;
            if(!name[n1]) name[n1]=++index;
           // cout<<name[n1]<<' '<<index<<endl;
            if(!name[n2]) name[n2]=++index;
           // cout<<name[n2]<<' '<<index<<endl;


            //cout<<"UV="<<name[n1]<<sum[name[n2]];
            makefriend(name[n1],name[n2]);

          //  cout<<sum[]<<endl;

        }
    }



    return 0;
}

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
#define Pi acos(-1)
#define s2(n,m) scanf("%lf %lf",&n,&m)





struct edge
{
	int u,v,w;
	bool operator < (edge& p )
	{
		return w < p.w;
	}
};

int pr[45];

vector<edge> e;

int find(int r)
{
   return (pr[r]==r) ? r:  find(pr[r]);
}
int mst(int n)
{
	sort(e.begin(),e.end());
	for(int i=1;i<=n;i++)pr[i]=i;

	int count=0,s=0;
	for(int i=0;i<(int)e.size();i++)
	{
		int u=find(e[i].u);
		int v=find(e[i].v);
		if(u!=v)
		{
			pr[u]=v;
			count++;
			s+=e[i].w;
			if(count==n-1) break;
		}
	}
	return s;
}

int main(){
//	READ("in");
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		edge get;
		get.u=u; get.v=v; get.w=w;
		e.push_back(get);
	}
	cout<<mst(n)<<endl;
	return 0;

}

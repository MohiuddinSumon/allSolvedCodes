#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%d%d",&n,&m)
#define s3(n,m,o) scanf("%d%d%d",&n,&m,&o)
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

#define N 100000
ull colour[N+1];
ull clrness[N+1];

int main()
{
    mem(clrness,0);
    for(int i=0; i<=N; i++)
        colour[i]=i;
    ull n,m,l,r,x,t,temp,sum;

    while(s2(n,m)==2)
    {
        mem(clrness,0);
        for(int i=0; i<=n; i++)
            colour[i]=i;
        for(int i=0; i<m; i++)
        {
            s(t);
            if(t==1)
            {
                s3(l,r,x);
                for(int i=l; i<=r; i++)
                {
                    temp = colour[i];
                    colour[i]=x;
                    clrness[i] += abs(temp-x);
                }
            }
            else
            {
                s2(l,r);
                sum=0;
                for(int i=l; i<=r; i++)
                    sum+=clrness[i];
                cout<<sum<<endl;
            }
        }
    }



    return 0;
}

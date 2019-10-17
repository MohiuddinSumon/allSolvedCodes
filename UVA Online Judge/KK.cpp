#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=1; i<=n; ++i)
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
#define s2(n,m) scanf("d",&n,&m)

int main()
{
    int tc,temp;
    ull a,b;

    s(tc);
    for(int k=1; k<=tc;++k)
    {

        cin>>a>>b;
        int c[b+1];
        sfor(b)
        {
            cin>>c[i];
        }
        int d[a+1];
        aforb(0,a)d[i]=i;

        sfor(b)
        {
            for(int j=1;j*c[i]<=a; ++j)
                d[j*c[i]]=-1;

//            if(!d[c[i]])
//            {
//                cout<<d[c[i]]<<endl;
//                //d[c[i]]=true;
//                for(int j=1; j*c[i]<=a; j++)
//                    d[j*c[i]]=true;
//            }
        }
        int count=0;
        sfor(a) if(d[i]!=-1)count++;

        cout<<count<<endl;


    }





    return 0;
}

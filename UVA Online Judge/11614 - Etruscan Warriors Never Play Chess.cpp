#include<bits/stdc++.h>
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

//map<ull,ull> result;
//
//#define M 1000000000000000000
//void precom()
//{
//    for(ull i=0; i<M; i++)
//    {
//        result[i]=(sqrt( (double) 1+8*i)-1)/2;
//    }
//
//}


int main()
{
    //cout<<gcd(10,20);
    // precom();
    int tc;
    ull n;
    s(tc);
    while(tc--)
    {
        cin>>n;
        ull a=(sqrt( (double) 1+8*n)-1)/2;
        pf("%llu\n",a);
    }




    return 0;
}

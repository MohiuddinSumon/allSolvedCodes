#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("d",&n,&m)
#define sfor(n) for(int i=0; i<n; i++)
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




int main()
{
    int num[4];
    while(scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3])==4)
    {
        sort(num,num+4);
        if(num[0]+num[1]>num[2] ||num[0]+num[1]>num[3] ||num[1]+num[2]>num[3] )
            pf("TRIANGLE\n");
        else if(num[0]+num[1]==num[2] || num[0]+num[1]==num[3] ||num[1]+num[2]==num[3] )
            pf("SEGMENT\n");
        else
            pf("IMPOSSIBLE\n");
    }


    return 0;
}

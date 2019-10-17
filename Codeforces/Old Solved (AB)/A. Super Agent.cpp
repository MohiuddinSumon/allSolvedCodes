#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define s2(n,m) scanf("d",&n,&m)
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




int main()
{
    char agnt[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>(agnt[i][j]);
        }
    }


    if((agnt[0][0]==agnt[2][2]) && (agnt[0][1]==agnt[2][1]) &&(agnt[0][2]==agnt[2][0]) &&(agnt[1][0]==agnt[1][2]))
        pf("YES\n");
    else
        pf("NO\n");

    return 0;
}

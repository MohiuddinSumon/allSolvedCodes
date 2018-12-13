#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%d%d",&n,&m)
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
    int n,m,x;
    char c;
    while(s2(n,m)==2)
    {
        x=0;
        int flag[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>c;
                (flag[i][j])=c-48;
                //scanf("%d",&flag[i][j]);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(x!=-1)
            for(int j=0; j<m-1; j++)
            {
                if(flag[i][j]!=flag[i][j+1] || (i!=n-1 && flag[i+1][j]==flag[i][j]))
                {
                    pf("NO\n");
                    x=-1;
                    break;
                }
            }
        }
        if(x!= -1) pf("YES\n");

    }



    return 0;
}

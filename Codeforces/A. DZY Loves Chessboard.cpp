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
    int n,m;
    while(s2(n,m)==2)
    {
        char arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>arr[i][j];
        }
        char x,y;

        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)x='B',y='W';
            else x='W',y='B';
            for(int j=0; j<m; j++)
            {
                if(arr[i][j] == '-')cout<<'-';
                else if(j%2==0)cout<<x;
                else cout<<y;
            }
            cout<<endl;
        }
    }

    return 0;
}

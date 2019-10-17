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

int main()
{
    string a="";
    int n;
    while(s(n)==1 && n>=0)
    {
        int i;
        if(n==0) cout<<"0"<<endl;
        else{
        while(n)
        {
            i=(n%3);
            n/=3;
            a+=(i+48);
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
        a.clear();
        }
    }

    return 0;
}

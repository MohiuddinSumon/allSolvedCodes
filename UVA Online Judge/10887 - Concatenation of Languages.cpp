#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
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


ll power(ll x,int n ){ ll r = 1;while( n>0 ){if (n % 2 != 0 )r = multimod2(x,r);x = multimod2(x,x);n >>=1;}return r;}
double fpower(double x, int n){double temp = 1.0;while(n != 0){if( n%2 == 0)temp *= temp;else{if(n>0)temp = x*temp*temp;else temp = (temp*temp)/x;}n /= 2;}return temp;}

int main()
{
    int testNo,a,b;
    string str;

    s(testNo);
    sfor(testNo)
    {
        scanf("%d%d",&a,&b);
        sfor(a+b) cin>>str;
        pf("Case %d: %d\n",i,a*b);
    }




    return 0;
}

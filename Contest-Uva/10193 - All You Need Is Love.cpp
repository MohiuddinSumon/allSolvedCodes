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
    int n,a,b;
    ull d1,d2;
    string s1,s2;
    s(n);
    int i=1;
    while(n--)
    {
        cin>>s1>>s2;
        a=s1.size();
        b=s2.size();
        int base=1;
        d1=d2=0;
        for(int i=a-1; i>=0; i--)
        {
            d1 += (s1[i]-'0')*base;
            base *= 2;
        }
        base=1;
       for(int i=b-1; i>=0; i--)
        {
            d2 += (s2[i]-'0')*base;
            base *= 2;
        }
        if(__gcd(d1,d2)>1)
            pf("Pair #%d: All you need is love!\n",i);
        else
            pf("Pair #%d: Love is not all you need!\n",i);
        i++;
    }
    return 0;
}

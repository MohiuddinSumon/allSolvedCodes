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
    int test,n;
    double per;
    s(test);
    for(int i=1; i<=test; i++)
    {
        int txt=0;
        s(n);
        if(n<=180000) txt=0;
        else if(n>180000 && n<=480000)
        {
            n -=180000;
            per=0.1;
            txt=ceil(n*per);
            if(txt<2000) txt=2000;
        }


        else if(n>480000 && n<=880000)
        {
            n-=480000;
            txt=30000;
            per=0.15;
            txt+=ceil(n*per);
        }
        else if(n>880000 && n<=1180000)
        {
            n-=880000;
            txt=90000;
            per=0.2;
            txt+=ceil(n*per);
        }
        else
        {
            n -= 1180000;
            txt=150000;
            per=0.25;
            txt+=ceil(n*per);
        }


       pf("Case %d: %d\n",i,txt);


    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n) scanf("%c",&n)
#define sfor(n) for(int i=0; i<=n; i++)
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


ll power(ll x,int n )
{
    ll r = 1;
    while( n>0 )
    {
        if (n % 2 != 0 )r = multimod2(x,r);
        x = multimod2(x,x);
        n >>=1;
    }
    return r;
}
double fpower(double x, int n)
{
    double temp = 1.0;
    while(n != 0)
    {
        if( n%2 == 0)temp *= temp;
        else
        {
            if(n>0)temp = x*temp*temp;
            else temp = (temp*temp)/x;
        }
        n /= 2;
    }
    return temp;
}

int main()
{
    string a,b;
    int digit,letter,test;
    char str[4];
    s(test);
    while(test--)
    {
        getline(cin,a,'-');
        getline(cin,b);
        sscanf(a.c_str(),"%s",str);
        sscanf(b.c_str(),"%d",&digit);
        letter = ((str[0]-65)*676)+((str[1]-65)*26) + (str[2]-65);
        if(abs(letter-digit) <= 100)
            pf("nice\n");
        else
            pf("not nice\n");

    }



    return 0;
}



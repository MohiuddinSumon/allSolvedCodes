#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%s",n)
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

int status[1050];
void setStatus()
{

    for(int i=2; i<=1050; i++)
    {
        if(status[i] == 0)
        {
            for(int j= i+i; j<=1050; j += i)
                status[j]=1;
        }
    }
}

int main()
{
    mem(status,0);
    setStatus();
    char inp[21];
    while(s(inp) == 1)
    {
        int sum=0,length;
        length=strlen(inp);

        for(int i=0; i<length; i++)
        {
            if(isupper(inp[i])==0)//means it is lower case
                sum += inp[i]-96;
            else
                sum += inp[i]-38;
        }
        if(status[sum] == 0)
            pf("It is a prime word.\n");
        else
            pf("It is not a prime word.\n");


    }


    return 0;
}

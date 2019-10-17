#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%lld",&n)
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

ull fact_mem[15];
ull fact(int n)
{
    if (n<2)return 1 ;
    else return n*fact(n-1);
}

int main()
{
    int n;
    for(int i=6; i<14; i++)
        fact_mem[i]=fact(i);
    while(s(n)==1)
    {
        //cout<<fact(-3)<<endl;
        if((n<8 && n>=0)|| (n<0 && abs(n)%2==0))pf("Underflow!\n");
        else if((n>13 && n>=0) || (n<0 && abs(n)%2!=0))pf("Overflow!\n");
        else
        {
             pf("%lld\n",fact_mem[n]);
        }

    }


    return 0;
}

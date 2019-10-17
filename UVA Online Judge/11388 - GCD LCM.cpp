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

#define lim 2147483648

ll power(ll x,int n ){ ll r = 1;while( n>0 ){if (n % 2 != 0 )r = multimod2(x,r);x = multimod2(x,x);n >>=1;}return r;}
double fpower(double x, int n){double temp = 1.0;while(n != 0){if( n%2 == 0)temp *= temp;else{if(n>0)temp = x*temp*temp;else temp = (temp*temp)/x;}n /= 2;}return temp;}

int main()
{
    int test,G,L;
    s(test);
    while(test--)
    {
        int a,b,flag=0;
        scanf("%d%d",&G,&L);
        //cout<<G<<' '<<L<<endl;
//        for(int i=1; i<=L && flag!=-1; i++)
//        {
//            for(int j=1; j<i; j++)
//            {
//                a= __gcd(i,j);
//                b= abs(i*j)/a;
//               // cout<<a<<' '<<b<<' '<<G<<' '<<L<<endl;
//                if( a == G && b == L )
//                    {
//                        if(a<=b){flag=-1;break;}
//                    }
//            }
//        }


        if(L%G != 0) pf("-1\n");
        else pf("%d %d\n",G,L);
    }


    return 0;
}

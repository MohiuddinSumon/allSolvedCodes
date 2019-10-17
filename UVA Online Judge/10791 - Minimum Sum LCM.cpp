#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
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


ll power(ll x,int n ){ ll r = 1;while( n>0 ){if (n % 2 != 0 )r = multimod2(x,r);x = multimod2(x,x);n >>=1;}return r;}
double fpower(double x, int n){double temp = 1.0;while(n != 0){if( n%2 == 0)temp *= temp;else{if(n>0)temp = x*temp*temp;else temp = (temp*temp)/x;}n /= 2;}return temp;}

int main()
{
    while(true)
    {
        string x;

        int a,i,j;
        //cin>>a;
       // x=bitset<32> (a);
      //  sfor(32){if (str.begin() == 1)break; else str.pob(str.begin());}

     //   int b = a.count();
//        cout<<bitset<3>(a)<<endl;
        int v;
        cin>>v;
        for (int i = 31; i >= 0; i--){cout<<"DDD"<<(v>>i)<<endl;
    std::cout << ((v >> i) & 1)<<endl;}
    }


    return 0;
}

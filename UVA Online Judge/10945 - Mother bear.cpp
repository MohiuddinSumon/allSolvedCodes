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
    string str,ptr;
    int i,j,flag,sizez;

    while(getline(cin,str) && str != "DONE")
    {
        sizez=str.size();
        flag=0;
        for(i=0; i<sizez;i++)
        {
             if(!ispunct(str[i]) && !isspace(str[i]) )
             {
                 ptr.pub(tolower(str[i]));
             }
        }

        cout<<ptr<<endl;
        sizez=strlen(ptr.c_str());
        flag=0;
        for(i=0,j=sizez-1; i<j ;i++,j--)
        {
            if(ptr[i] != ptr[j])
            {
                flag=-1;
                break;
            }
        }
        (flag == -1) ? pf("Uh oh..\n") : pf("You won't be eaten!\n");

    }


    return 0;
}

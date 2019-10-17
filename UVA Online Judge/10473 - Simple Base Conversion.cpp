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


double toDeci(string str, int base)
{
    int vsize=str.size();

    int exp=0,a;
    long double deci=0;
    for(int i=vsize-1; i>1; --i,++exp)
    {
        if(str[i]>60)
        {
            deci+=((str[i]-55)*pow(base*1.0,exp*1.0)) ;
        }
        else
        {
            deci+= ((str[i]-48)*pow(base*1.0,exp*1.0));
        }
    }
    return deci;
}

string fromDeci(int n,int base)
{
    string str="";
    while(n)
    {
        if(n%base > 9)
        {
            str += (n%base)+55;
        }
        else str += (n%base)+48;
        n /= base;
    }
    str+="x0";
    reverse(str.begin(),str.end());
    return str;

}

int main()
{
    string number;

    while(cin>>number && number[0]!='-')
    {
        if(number.size()>2 && number[0]=='0'&&number[1]=='x')
        {
            ull val=toDeci(number,16);
            cout<<val<<endl;
        }
        else
        {
            int a=atoi(number.c_str());
            string str = fromDeci(a,16);
           pf("%s\n",str.c_str());
        }
    }

    return 0;
}

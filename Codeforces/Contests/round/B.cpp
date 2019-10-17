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


string fromDeci(ull n,int base)
{
    string str="";
    while(n)
    {
        //cout<<(n%base)<<endl;
        if(n%base > 9)
        {
            str += (n%base)+55;
        }
        else str += (n%base)+48;

        n /= base;

    }
    reverse(str.begin(),str.end());

    //cout<<"FROM "<<str<<endl;
    if(str.empty())str="0";
    return str;

}



int main()
{
    //char number[15],number2[15];
    string number,number2;
    int base,cbase,int_num,val;
    char ch;

    // pf("%d",'9');
    int tc;
    s(tc);
    sfor(tc)
    {



        int flag=0;
        cin>>val>>ch>>base;


        string str = fromDeci(val,base);
        cout<<str<<endl;
       // pf("%s base %d = %s base %d\n",number.c_str(),base,str.c_str(),cbase);
    }






return 0;
}

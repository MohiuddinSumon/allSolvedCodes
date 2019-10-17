#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=0; i<n; i++)
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

#define s2(n,m) scanf("%d%d",&n,&m)




int main()
{
    int n,m,x;
    map<string,int> dict;
    string str;
    ull sum;
    vector<ull> vsum;
    s2(n,m);
    sfor(n)
    {
        cin>>str>>x;
        dict[str]=x;
    }
    sfor(m)
    {
        sum=0;
        while((cin>>str)&&str!=".")
        {
            //cout<<str<<endl;
            if(dict.find(str) != dict.end())
                sum += dict[str];
        }
        vsum.pub(sum);
    }
    int vsize=vsum.size();
    sfor(vsize)
    cout<<vsum[i]<<endl;


    return 0;
}

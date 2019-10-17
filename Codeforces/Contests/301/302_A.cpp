#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=0; i<n; ++i)
#define aforb(a,b) for(int i=a; i<=b; ++i)
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

int main()
{
    int n,tc;
    string in;
    set<char> myset;
    vector<char>myvect;


    while(cin>>n>>in)
    {
        vector<string> out;
        int siz=in.size();
        int count=0;
        sfor(siz)
        {
            myset.insert(in[i]);
        }

        for(auto it=myset.begin(); it!=myset.end(); ++it)
        {
            char s=*it;
            myvect.pub(s);
        }

        for(int i=0;i<myvect.size();++i)
        {
           // cout<<myvect[i]<<endl;
            for(int j=0; j<siz;++j)
            {
                cout<<in[j]<<endl;
                if(myvect[i]==in[j])
                {

                    in[j]='0';
                    continue;
                }
            }
        }
        cout<<in<<endl;
        sfor(n)
        {
            out[i]=myvect[i];
            myvect[i]='0';
        }
        sfor(siz)
        {
            if(in[i]!='0')
            out[0]+=in[i];
        }
        sfor(n)
        {
            if(myvect[i]!='0')
                out[0]+=in[i];
        }
        sfor(n)
        {
            cout<<out[i]<<endl;
        }


        count=myset.size();


        (count>=n) ?  pf("YES\n") : pf("NO\n");

        myset.clear();
        in.clear();
    }



    return 0;
}

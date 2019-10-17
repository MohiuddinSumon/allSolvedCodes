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

#define s2(n,m) scanf("%d%d",&n,&m)

#define M 1000000000



int main()
{
    vector<int> snow;
    vector<int>::iterator itlow,itup,it;
    vector<int> vectSet;
    int test,test2,temp,ssize,sss;
    s(test);
    while(test--)
    {
        s(test2);
        ssize=0;
        while(test2--)
        {
            s(temp);
            if(find(snow.begin(),snow.end(),temp) == snow.end())
            {
//                cout<<snow.end()<<endl;
                snow.pub(temp);
                sss=snow.size();
                ssize=max(ssize,sss);
                cout<<"ssize = "<<ssize<<endl;
            }
            else
            {
                itup=snow.begin();
                itlow=find(snow.begin(),snow.end(),temp);
                cout<<"LOW = "<<*itlow<<endl;
                snow.erase(itup,itlow);

                cout<<"erase = "<<snow.size()<<endl;
                snow.pub(temp);
            }
        }
        cout<<"result = "<<ssize<<endl;
        snow.clear();
    }


    return 0;
}

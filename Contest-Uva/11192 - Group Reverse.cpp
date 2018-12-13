#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
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

int main()
{
    string str,ptr;
    int n;

    while(s(n)==1 && n!=0)
    {
        cin>>str;
        int lsize=str.size();
        n=(lsize/n);
        int j=0;
        int i=n-1;
        int x=2;
        int y=1;
        while(i<lsize)
        {
            ptr.pub(str[i]);
            if(i==j)
            {
                j=(n*y);
                i=(n*x);
                x++;
                y++;
            }

            i--;
        }
        cout<<ptr<<endl;
        ptr.clear();
        str.clear();
    }


    return 0;
}

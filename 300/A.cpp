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

    string a,b,c;
    c="CODEFORCES";
    cin>>a;
    int size=a.size();
    size--;
    int siz=size;
    if(a[0]!='C')
    {
        sfor(10)
        {
            b+=a[siz];
            siz--;
        }
        reverse(b.begin(),b.end());
        (b==c)? pf("YES\n"):pf("NO\n");
        return 0;
    }
    else if(a[siz]!='S')
    {
        sfor(10)
        {
            b+=a[i];
        }
        reverse(b.begin(),b.end());
        (b==c)? pf("YES\n"):pf("NO\n");
        return 0;
    }
    else
    {

        int x=0,y=0;
        for(int i=0,j=0;a[i];i++)
        {
            if(a[i]==c[j])
            {
                j++;
                if(x>0)
                {
                    y++;
                    x=0;
                }
            }
            else x++;
        }

        cout<<y<<endl;
        (y <2) ? pf("YES\n"):pf("NO\n");

    }


    return 0;
}




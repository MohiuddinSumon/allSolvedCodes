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
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define s2(n,m) scanf("%d%d",&n,&m)

int main()
{
    int a,b,c,res;
    while(s2(a,b)==2)
    {
        res=0;
        int arr[a+1];
        sfor(a)
        {
            s(arr[i]);
        }
        if(arr[b-1])
        {
            res=b;
            aforb(b,a)
            {
                if(arr[b-1]!=arr[i]) break;
                else res++;
            }
        }
        else
        {
            aforb(0,b)
            {
                if(!arr[i]) break;
                else res++;
            }
        }

        pf("%d\n",res);
    }



    return 0;
}

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

#define s2(n,m) scanf("d",&n,&m)



int main()
{

        int t,i,j,flag,flag1=0,temp[27]= { };
        char n[100];
        scanf("%d",&t);
        scanf("%s",n);
        if(t<26) printf("NO\n");
        else
        {
            for(i=0; i<t; i++)
            {
                //cout<<toupper(n[i])-64<<endl;
                temp[toupper(n[i])-64]++;

            }
            for(i=1; i<=26; i++)
            {
                if(temp[i]==0)
                {
                    flag1++;
                    break;
                }
            }
            if(flag1==0) printf("YES\n");
            else printf("NO\n");
        }


    return 0;
}

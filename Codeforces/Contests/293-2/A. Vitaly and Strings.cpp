#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("%s%s",&n,&m)
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


int main()
{
    char a[105],b[105];
    while(s2(a,b)==2)
    {
        int len = strlen(a);
        int flag=0;
        for(int i=0; i<len; i++)
        {
            if((a[i] != b[i]) && (a[i]!='z'))
            {
                a[i]+=1;
                if(a[i+1] == 'z') a[i+1]='a';
                if(strcmp(a,b)==0)
                {
                    pf("No such string\n");
                    flag=-1;
                    break;
                }
            }

            else if((a[i] == 'z') && (i!=0) && (a[i-1]!=b[i]))
            {
                a[i-1]+=1;
                a[i] = 'a';
                //cout<<a<<' '<<b<<endl;
                if(strcmp(a,b)==0)
                {
                    pf("No such string\n");
                    flag=-1;
                    break;
                }
            }
        }

        if(flag != -1) pf("%s\n",a);

    }

    return 0;
}

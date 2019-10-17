#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define s2(n,m) scanf("d",&n,&m)
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

#define M 100000

int prime[M+1];
int status[(M/2)+1];




int main()
{
    mem(prime,0);
    mem(status,0);


    int sqrtN = int( sqrt( double (M)));
    for(int i=3; i<=sqrtN; i+=2)
    {
        if(status[i>>1] == 0)
        {
            for(int j= i*i; j<=M; j+= i+i)
            {
                status[j>>1]=1;
            }
        }
    }
    prime[0]=2;
    int j=1;
    for(int i=3; i<=sqrtN; i+=2,j++)
    {
        if(status[i>>1] == 0)
            prime[j]=i;
    }

    string str;
    while(cin>>str && str!="0")
    {
        int ssize=str.size();
        int a,b=0,sequ=0,flag;
        for(int i=0; i<ssize; i++)
        {
            a=str[i]-48;
            b*=10 ;
            b+= a;
            for(int i=0; b>=prime[i]; i++)
            {
                if(prime[i]==b)
                {
                    cout<<prime[i]<<endl;
                    if(b>sequ)sequ=b;
                   // b=0;
                    flag=-1;
                    break;
                }
            }

            cout<<"gg "<<sequ<<endl;

        }
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define s(n,m) scanf("%d%d",&n,&m)
#define pf printf
#define Sfor(n) for(int i=1;i<=n;i++)


int main()
{
    int n,x,sum=0,a,b,start=1;
    s(n,x);
    Sfor(n)
    {
        s(a,b);
        if(a-start>=3)
        {
            sum+=((a-start)%x)+(b-a+1);
            start+=b;
        }
        else
        {
            sum+=(a%x)+(b-a+1);
            start+=b;
        }
    }

    pf("%d\n",sum);

    return 0;
}

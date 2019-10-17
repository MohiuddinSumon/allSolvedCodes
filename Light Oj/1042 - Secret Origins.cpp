#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int testCase,a,b,c,acount,bcount;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        acount=bcount=0;
        s(a);
        b=a+1;
        while(a!=0)
        {
            if(a-((a>>1)<<1)==1) acount++;
            a>>=1;
        }
        while(bcount!=acount)
        {
            bcount=0;
            c=b;
            while(c!=0)
            {
                if(c-((c>>1)<<1)==1) bcount++;
                c>>=1;
            }
            b++;
        }
        b--;
        pf("Case %d: %d\n",i,b);

    }
    return 0;
}

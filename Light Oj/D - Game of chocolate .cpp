#include<iostream>
#include<cstdio>

#define s(k) scanf("%d",&k)
#define sl(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)


#define pf printf

using namespace std;

int main()
{
    int testcase,k1,k2,p1,p2;
    int a,b,c,d,x,y,m,n;

    s(testcase);
    for(int i=1; i<=testcase; i++)
    {
        sl(k1,k2,p1,p2);
        a=k1;
        b=k1+k2;
        x=1+p1;
        y=x+p2;
        c=k2;
        d=k1+k2;
        m=p2+1;
        n=m+p1;

        pf("Case %d: %d/%d",i,(a*x)+(c*m),b*y);

    }

    return 0;
}

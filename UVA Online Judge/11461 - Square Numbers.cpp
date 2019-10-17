#include<iostream>
#include<cstdio>
#include<cmath>

#define s(n,m) scanf("%d%d",&n,&m)
#define pf printf

using namespace std;

int main()
{
    int a,b,itest;
    float ftest;
    while(s(a,b)==2 && a!=0 && b!=0)
    {
        int count=0;
        for(int i=a; i<=b; i++)
        {
            itest=ftest=pow(i,.5);
            if(itest == ftest)
                count++;
        }
        pf("%d\n",count);

    }

    return 0;
}

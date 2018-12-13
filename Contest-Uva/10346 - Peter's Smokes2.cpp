#include<iostream>
#include<cstdio>

#define s(n,m) scanf("%lf%lf",&n,&m)
#define pf printf

using namespace std;

int main()
{
    double n,k;
    int x;
    while(s(n,k)==2)
    {
        (k>n) ? x=n : x=k+1+(((n-k)/(k-1))*k);

        pf("%d\n",x);
    }

    return 0;
}

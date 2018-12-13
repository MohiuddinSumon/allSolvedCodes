#include<iostream>
#include<cstdio>

#define s(n) scanf("%lf",&n)
#define pf printf

using namespace std;

int main()
{
    double n;
    while(s(n)==1)
    {
        (n>=1 && n<=200) ? pf("%.f\n",4+(((n-3)/2)*3+ 1e-8)): pf("0\n");
    }

    return 0;
}


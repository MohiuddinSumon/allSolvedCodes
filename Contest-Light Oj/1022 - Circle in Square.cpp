#include<iostream>
#include<cstdio>
#include<cmath>
#define pi acos(-1)
#define pf printf

using namespace std;

int main()
{
    int testCase;
    double radious;
    cin >> testCase;
    for(int i=0;i<testCase; i++)
    {
        cin >> radious;
        pf("Case %d: %.2lf\n",i+1,(((radious*2)*(radious*2))-(pi*radious*radious)));
    }


    return 0;
}

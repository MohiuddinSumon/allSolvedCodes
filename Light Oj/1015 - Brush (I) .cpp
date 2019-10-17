#include<iostream>
#include<cstdio>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int a,x,sum;
    for(int i=0; i<testCase; i++)
    {
        cin >> a ;
        sum=0;
        for(int j=0; j<a; j++)
        {
            cin >> x;
            sum+=x;
        }
        pf("Case %d: %d\n",i+1,sum);
    }

    return 0;
}



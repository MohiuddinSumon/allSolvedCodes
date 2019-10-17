#include<iostream>
#include<cstdio>
#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int testCase,num,x,i,j,sum;
    s(testCase);
    for(i=1; i<=testCase; i++)
    {
        s(num);
        sum=0;
        for(j=0; j<num; j++)
        {
            s(x);
            if(x>0)
            sum+=x;
        }
        pf("Case %d: %d\n",i,sum);
    }

    return 0;
}

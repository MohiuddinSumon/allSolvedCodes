#include<iostream>
#include<cstdio>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int n,k,sum;
    while(s(n)==1)
    {
        sum=n;
        if(n<1 || n>200)
        {
            pf("0\n");
        }
        else
        {
            while(n>=3)
            {
                sum+=(n/3);
                n=(n/3)+(n%3);
            }
            if(n==2)
                sum++;
            pf("%d\n",sum);
        }
    }

    return 0;
}

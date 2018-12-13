#include<iostream>
#include<cstdio>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int n,count;
    while(s(n)==1 && n!=0)
    {
        count=0;
        while(n>2)
        {
            count+=(n/3);
            n=(n/3)+(n%3);
        }
        (n==2)?pf("%d\n",count+1) : pf("%d\n",count);
    }

    return 0;
}

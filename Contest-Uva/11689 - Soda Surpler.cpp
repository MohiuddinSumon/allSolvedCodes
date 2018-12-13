#include<iostream>
#include<cstdio>

#define s1(n) scanf("%d",&n)
#define s(n,m,o) scanf("%d%d%d",&n,&m,&o)
#define pf printf

using namespace std;

int main()
{
    int e,f,c,sum,total,testCase;
    s1(testCase);
    while(testCase--)
    {

        s(e,f,c);
        sum=0;
        total=e+f;
        if(total<c)
        {
            pf("%d\n",sum);
        }
        else
        {
            while(total>=c)
            {
                sum+=(total/c);
                total=(total/c)+(total%c);
            }
            pf("%d\n",sum);
        }
    }
    return 0;
}



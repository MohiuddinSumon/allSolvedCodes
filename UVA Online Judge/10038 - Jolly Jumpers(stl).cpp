#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int n,a,b,flag,limit;
    multiset<int> jolly;
    while(s(n)==1 )
    {
        multiset<int>::iterator it;
        limit=n-1;
        s(a);
        n--;
        while(n--)
        {
            s(b);
            flag=abs(a-b);
            jolly.insert(flag);
            a=b;
        }
        it=jolly.begin();
        for(int i=1; i<=jolly.size(); i++,it++)
        {
            (i = *it);

            flag=jolly.count(i);
            if(flag>1)
                break;

        }
        if(jolly.empty())
        {
            pf("Jolly\n");
        }
        else
        {
            it=jolly.end();
            it--;
            (*it>limit || *it==0 || flag > 1) ? pf("Not jolly\n") : pf("Jolly\n");
        }

        jolly.clear();
    }


    return 0;
}

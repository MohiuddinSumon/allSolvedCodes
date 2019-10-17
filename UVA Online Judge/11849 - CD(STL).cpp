#include<iostream>
#include<cstdio>
#include<set>

#define s1(n) scanf("%d",&n)
#define s2(n,m) scanf("%d%d",&n,&m)

#define pf printf

using namespace std;

int main()
{
    int n,m,a,b,i,j,sell;
    set<int> first;
    set<int> second;
    set<int> :: iterator it,chk;
    while(s2(n,m)==2 && n!=0 && m!=0)
    {
        sell=0;
        while(n--)
        {
            s1(a);
            first.insert(a);
        }
        while(m--)
        {
            s1(a);
            second.insert(a);
        }
        if(first.size()<second.size())
            first.swap(second);

        for(it=second.begin(); it!=second.end(); it++)
        {
            i=*it;
            chk=first.find(i);
            if(chk!=first.end())
                sell++;
        }
        pf("%d\n",sell);

        first.clear();
        second.clear();
    }
    return 0;
}

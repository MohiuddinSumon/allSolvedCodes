#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>

#define s(n,m) scanf("%d%d",&n,&m)
#define sl(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int n,m,a,b,i,j;
    while(s(n,m)==2 && n!=0 && m!=0)
    {
        int jack[n],jill[m],sell=0;

        for(i=0; i<n; i++)
        {
            sl(jack[i]);
        }

        for(i=0; i<m; i++)
        {
            sl(jill[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(jack[i]==jill[j])
                    sell++;
            }
        }
        pf("%d\n",sell);
    }

    return 0;
}

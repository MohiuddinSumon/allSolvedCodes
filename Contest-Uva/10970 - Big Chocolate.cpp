#include<bits/stdc++.h>

#define s(n,m) scanf("%d%d",&n,&m)
#define pf printf

int main()
{
    int m,n,output;
    while(s(m,n)==2)
    {
        output=(m-1)+((n-1)*m);
        pf("%d\n",output);
    }

    return 0;
}

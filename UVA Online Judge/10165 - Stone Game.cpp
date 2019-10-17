#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf


int main()
{
    int n,m;
    while(s(n)==1 && n!=0)
    {
        for(int i =0; i<n; i++)
        {
            s(m);
        }
        (n%2==0) ? pf("No\n") : pf("Yes\n");
    }

    return 0;
}

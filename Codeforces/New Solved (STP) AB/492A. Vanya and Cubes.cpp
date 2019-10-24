#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, res,p;
    p=res=0;
    cin>>n;

    for(int i=0; i<=n; )
    {
        res++;
        i+=(res*(res+1)/2);
    }
    cout<<res-1<<endl;



    return 0;
}

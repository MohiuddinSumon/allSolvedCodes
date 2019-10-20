#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,res,z;
    cin>>n>>t;
    res=0;
    while(n--)
    {
        cin>>z;
        (z>t)?res+=2:res++;
    }
    cout<<res<<endl;
    return 0;
}

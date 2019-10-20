#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,res;
    cin>>n>>l;
    res=1;
    int a[n];
    for(int i=1; i<n; i++)cin>>a[i];

    while(res<l)
    {
        res+=a[res];
       // cout<<res<<endl;
    }
    (res==l)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}

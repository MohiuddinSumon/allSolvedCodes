#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1]={0};
    for(int i=0; i<n; i++)cin>>a[i];
    int cur=0,mx=0,pmax=0;

    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]<=a[i])mx++;
        else
        {
            pmax=max(mx,pmax);
            mx=0;
        }
    }
    pmax=max(pmax,mx);
    cout<<pmax<<endl;


    return 0;
}

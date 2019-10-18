#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n+1];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    double res=a[0];
    for(int i=1; i<n; i++)
    {
        res = (res+a[i])/2;
        //cout<<res<<endl;
    }
    cout<<res<<endl;


    return 0;
}

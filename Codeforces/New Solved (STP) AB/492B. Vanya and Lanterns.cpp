#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int n[a];
    for(int i=0;i<a;i++)cin>>n[i];
    sort(n,n+a);
    double mx=max(n[0],b-n[a-1]); // for checking boundary, l can be 100 , lamps can be in 50-60 range.
    for(int i=0; i<a-1; i++)
    {
        mx=max(mx,(n[i+1]-n[i])/2.0);
    }

    //cout<<mx<<endl;
    printf("%.9lf\n", mx);
    return 0;
}

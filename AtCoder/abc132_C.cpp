#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    int diff = a[n/2]-a[n/2 -1];
    cout<<diff<<endl;

    return 0;
}

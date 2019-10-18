#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    vector<int>a,b;
    cin>>n;
    for(int i=0; i<n; i++){cin>>t; a.push_back(t);}
    b=a;
    sort(b.rbegin(),b.rend());
    for(int i=0; i<n; i++)(a[i]==b[0])?cout<<b[1]<<endl:cout<<b[0]<<endl;
    /*
    fails in some cases
    int n, mx, mx2,temp;
    cin>>n;
    int a[n+1],b[n+1];
    //a[0]=mx=temp;
    mx=mx2=-1;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>mx) mx=a[i];
        if(a[i]>mx2 && a[i] != mx) mx2=a[i];
        //if(a[i]>mx2) (mx2 == -1)?mx2=a[i]:(a[i] != mx)?mx2=a[i]:mx2;
       // cout<<mx<<' '<<mx2<<endl;
    }
    if(mx2== -1)mx2=mx;
    for(int i=0; i<n; i++)
    {
        (a[i] == mx)?cout<<mx2<<endl:cout<<mx<<endl;
    }
*/
    return 0;
}
/*
3
4
2
3
*/

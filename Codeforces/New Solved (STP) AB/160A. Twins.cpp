#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, res,temp;
    cin>>n;
    int a[n]={0};
    sum=res=temp=0;
    for(int i=0; i<n; i++){cin>>a[i];sum+=a[i];}
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        res+=a[i];
       // cout<<a[i]<<' '<<res<<' '<<sum-res<<endl;
        if(res>sum-res){temp=i;break;}
    }
    cout<<n-temp<<endl;

    return 0;
}

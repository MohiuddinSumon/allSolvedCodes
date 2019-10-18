#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cin>>n;
    int a[n+1]={0};

    for(int i=0; i<n; i++)cin>>a[i];

    int mx = a[0];
    mx--;
    for(int i=1; i<n&&flag; i++)
    {
        if(a[i]>mx)a[i]--;
        if(a[i]<mx)flag=false;
        mx=a[i];
        //if(a[i]-a[i-1] < -1)flag=false;
    }
    (flag==true)?cout<<"Yes"<<endl:cout<<"No"<<endl;


    return 0;
}

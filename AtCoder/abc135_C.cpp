#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+2],b[n+1];
    for(int i=0; i<n+1; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    long long int res=0;
    for(int i=0; i<n; i++)
    {
        if(b[i] >= a[i])
        {
            b[i]= b[i]-a[i];
            res+=a[i];
            //a[i]=0;
        }
        else
        {
            res+=a[i]-(a[i]-b[i]);
            b[i]=0;
        }
        if(b[i] != 0)
        {
            if(b[i] >= a[i+1])
            {
                res+=a[i+1];
                a[i+1]=0;
            }
            else
            {
                res+=b[i];
                a[i+1]=a[i+1]-b[i];
            }
        }

    }
    cout<<res<<endl;



    return 0;
}

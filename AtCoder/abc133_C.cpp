#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=INT_MAX;
    if(a/2019 != b/2019)
    {
        cout<<0<<endl;
        return 0;
    }
    else
        for(int i=a; i<=b; i++)
        {
            for(int j=i+1; j<=b; j++)
            {
                int t =((i%2019)*(j%2019))%2019;
                if(t<c)c=t;//cout<<i<<' '<<j<<endl;}
            }
        }
    cout<<c<<endl;
    return 0;
}

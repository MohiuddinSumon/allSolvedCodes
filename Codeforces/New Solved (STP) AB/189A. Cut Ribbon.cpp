#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b,c,mn,md,mx;
    cin>>n>>a>>b>>c;
    mn=min(a,min(b,c));
    mx=max(a,max(b,c));
    md=a+b+c-mn-mx;

    if(mn == 1)cout<<n<<endl;
    else if(n%mn == 0)cout<<n/mn<<endl;
    else if((n-md)%mn == 0)cout<<((n-md)/mn)+1<<endl;
    else if((n-mx)%mn == 0)cout<<((n-mx)/mn)+1<<endl;
    else
    {

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int mn = (n/m)*b;
    if(n%m != 0)mn+=min(b,(n%m)*a);
    cout<<min( mn , a*n)<<endl;

    //   (b*m) + ((n-m)*a)

    return 0;
}

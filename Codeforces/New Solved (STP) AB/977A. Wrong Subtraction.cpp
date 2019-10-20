#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t,res;
    cin>>n>>t;
    res = 0;
    while(t--)
    {
        (n%10 == 0)?n/=10:n--;
    }
    cout<<n<<endl;

    return 0;
}

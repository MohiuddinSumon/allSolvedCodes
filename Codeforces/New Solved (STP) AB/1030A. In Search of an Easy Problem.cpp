#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string res = "EASY";
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t==1)res="HARD";
    }
    cout<<res<<endl;

    return 0;
}

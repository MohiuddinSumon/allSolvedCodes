#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, res, police;
    res=police=0;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t==-1 && police == 0)res++;
        else if(t == -1)police--;
        else police+=t;
    }
    cout<<res<<endl;

    return 0;
}

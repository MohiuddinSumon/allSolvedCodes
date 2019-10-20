#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    char st[n];
    for(int i=0; i<n; i++)cin>>st[i];
    for(int x=0; x<t; x++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(st[i]=='B' && st[i+1]=='G'){swap(st[i],st[i+1]);i++;}
        }

    }
    for(int i=0; i<n; i++)cout<<st[i];
    cout<<endl;


    return 0;
}

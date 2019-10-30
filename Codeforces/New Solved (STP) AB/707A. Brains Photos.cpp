#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    char inp;
    string res="#Black&White";
    cin>>n>>m;
    while(n--)
    {
        for(int i=0; i<m; i++)
        {
            cin>>inp;
            if(inp == 'C'||inp == 'M'||inp == 'Y')res="#Color";
        }
    }

    cout<<res<<endl;


    return 0;
}

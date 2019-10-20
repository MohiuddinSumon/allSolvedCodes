#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    string in;
    cin>>in;
    int j=0;
    for(int i=0; i<in.size(); i++)
    {
        if(in[i]==s[j])j++;
    }
    (j==5)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}

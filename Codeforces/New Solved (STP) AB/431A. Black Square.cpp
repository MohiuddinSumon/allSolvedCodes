#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int> mp;
    string s;
    int n;
    cin>>n;
    mp['1']=n;
    cin>>n;
    mp['2']=n;
    cin>>n;
    mp['3']=n;
    cin>>n;
    mp['4']=n;

    cin>>s;
    int res=0;
    for(int i=0; i<s.size(); i++)
    {
        res+=mp[s[i]];
    }
    cout<<res<<endl;

    return 0;
}

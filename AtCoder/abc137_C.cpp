#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<string,int>mymap;
    map<string,int>::iterator it;
    cin>>n;
    string t;
    while(n--)
    {
        cin>>t;
        sort(t.begin(),t.end());
        mymap[t]=mymap[t]+1;
    }
    int cnt = 0;
    for (it=mymap.begin(); it!=mymap.end(); ++it) cnt += ((it->second)*(it->second -1))/2;
    //std::cout << it->first << " => " << it->second << '\n';

    cout<<cnt<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, z, a,b;
    string res="YES";
    cin>>n>>z;

    pair<int,int> dragons[z];
    //int dragons[z][2];
    //vector<vector<int> > dragons;

    for(int i=0; i<z; i++)
    {
        cin>>a>>b;
        dragons[i]=make_pair(a,b);
        //dragons[i][0]=a;
        //dragons[i][1]=b;

    }
    sort(dragons,dragons+z);
    for(int i=0; i<z; i++)
    {
        //cout<<dragons[i].first<<' '<<dragons[i].second<<endl;
        if(n>dragons[i].first)n+=dragons[i].second;
        else
            res="NO";
    }

    cout<<res<<endl;

    return 0;
}

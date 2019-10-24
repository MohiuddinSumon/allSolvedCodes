#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,res;
    string t;
    map<string,int> dict;
    dict["Tetrahedron"]=4;
    dict["Cube"]=6;
    dict["Octahedron"]=8;
    dict["Dodecahedron"]=12;
    dict["Icosahedron"]=20;

    res=0;
    cin>>n;
    while(n--)
    {
        cin>>t;
        res+=dict[t];
    }
    cout<<res<<endl;


    return 0;
}

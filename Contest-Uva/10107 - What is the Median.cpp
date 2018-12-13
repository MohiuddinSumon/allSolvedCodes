#include<iostream>
#include<cstdio>
#include<vector>

#include<algorithm>

#define s(n) scanf("%d",&n)

using namespace std;

int main()
{
    int n,i,flag;
    vector<int> seris;

    while(s(n)==1)
    {
        seris.push_back(n);
        sort(seris.begin(),seris.end());
        flag=seris.size()/2;
        if((seris.size()%2)!=0)
        {
            cout << seris[flag] << endl;
        }
        else
        {
            cout << (seris[flag-1]+seris[flag])/2 << endl;
        }

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, res;
    t=res=0;
    cin>>n;
    vector<int> v;
    for(int i=0; i<12; i++)
    {
        cin>>t;
        res+=t;
        v.push_back(t);
    }
    if(n==0)cout<<0<<endl;
    else if(res<n)cout<<-1<<endl;
    else
    {
        res=t=0;
        sort(v.rbegin(), v.rend());
        for(int i=0; t<n; i++)
        {
            t+=v[i];
            res++;
        }
        cout<<res<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> small,big,result;
    vector<string>::iterator it,bit;

    string a,b;
    int n,m;
    cin >> n >>m;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        if(a.length()<=b.length())
        {
            small.push_back(a);
            big.push_back(b);
        }
        else
        {
            small.push_back(b);
            big.push_back(a);
        }
    }


    for(int j=0; j<n; j++)
    {
        cin >> a;
        it=find(small.begin(),small.end(),a);
        if(it!= small.end())
        {
            result.push_back(*it);
        }
        else
        {
            int k=0;
            while(big[k]!=a) k++;
            result.push_back(small[k]);
        }
    }
    it=result.begin();
    for(it; it!=result.end(); it++)
    {
        cout<<*it<<' ';
    }
    cout<<endl;

    small.clear();
    big.clear();
    result.clear();

    return 0;
}

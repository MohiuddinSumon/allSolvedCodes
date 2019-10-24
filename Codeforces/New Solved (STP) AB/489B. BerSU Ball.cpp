#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,res;
    cin>>n;
    res=0;
    int boy[n];
    for(int q=0; q<n; q++)cin>>boy[q];
    cin>>m;
    int girl[m];
    for(int q=0; q<m; q++)cin>>girl[q];
    sort(boy,boy+n);
    sort(girl,girl+m);
//
//    if(n<=m)
//    {
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                //cout<<boy[i]<<' '<<girl[j]<<' '<<i<<' '<<j<<endl;
                if(abs(boy[i]-girl[j])<=1){res++;girl[j]=1000;break;}
            }
        }
//    }
//    else
//    {
//        for(;j<m; j++)
//        {
//            cout<<boy[i]<<'='<<girl[j]<<endl;
//            for(; i<n; i++)
//            {
//                if(abs(boy[i]-girl[j])<=1){res++;break;}
//            }
//        }
//    }
    cout<<res<<endl;

    return 0;
}

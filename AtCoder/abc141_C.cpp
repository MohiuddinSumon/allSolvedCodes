#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,q,t;
  cin>>n>>k>>q;
  int a[n+1]={0};
  for(int i=0; i<q; i++)
  {
    cin>>t;
    a[t]++;
  }
  for(int i = 1; i<=n; i++)
  	(k-(q-a[i]) > 0)?cout<<"Yes"<<endl:cout<<"No"<<endl;



  return 0;
}

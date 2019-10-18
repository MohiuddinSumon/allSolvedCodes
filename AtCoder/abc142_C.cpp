#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
  cin>>n;
  int a[n],r[n];
  for(int i=1; i<=n; i++)cin>>a[i];
  for(int i=1; i<=n; i++) r[a[i]]=i;
  for(int i=1; i<=n; i++)cout<<r[i]<<' ';
  cout<<endl;


  return 0;
}

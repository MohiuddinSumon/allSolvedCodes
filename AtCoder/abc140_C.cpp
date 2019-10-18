#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,t;
  cin>>n;
  int a[n];
  for(int i=0; i<n-1; i++)cin>>a[i];
  t=a[0];
  for(int i=1; i<n-1; i++) t += min(a[i],a[i-1]);
  t+=a[n-2];

  cout<<t<<endl;

  return 0;

}

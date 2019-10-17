#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a,b;
    long long res = 0;
    cin >> n >> a >> b ;
    for (int i=0; i<n; i++)
    {
        int a1 = a[i] - '0' ;
        int b1 = b[i] - '0' ;
        res += min(abs(10+b1-a1),min(abs(a1-b1),abs(10+a1-b1)));
        cout << res;
    }
    return 0;
}

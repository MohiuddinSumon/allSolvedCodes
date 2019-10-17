#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int testCase,n,ans;
    cin >> testCase;
    for(int i=0;i<testCase;i++)
    {
        cin >> n;
        ans=((((((n*567)/9)+7492)*235)/47)-498);
        ans/=10;
        ans%=10;
        cout << abs(ans) <<endl;
    }

    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int n,X=0,x=0,ans;
    cin >> n;
    char a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='X')
            X++;
        if(a[i]=='x')
            x++;
    }
    ((X>x)? ans=X-x :  ans =x-X);
    cout << ans << endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            cout << "X";
        else
            cout << "x";
    }
    cout << endl;


    return 0;
}

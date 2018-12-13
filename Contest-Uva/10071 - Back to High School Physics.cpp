#include<iostream>

using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        //cin >> a >> b;
        if(a < -100 || a > 100 || b < 0  || b > 200)
        {
            break;
        }
        else
            cout << 2*a*b <<endl;
    }
    return 0;
}

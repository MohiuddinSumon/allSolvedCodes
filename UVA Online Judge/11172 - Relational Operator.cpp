#include<iostream>

using namespace std;

int main()
{
    int test,a,b;
    while(cin >> test)
    {


    for(int i=0;i<test;i++)
    {
        cin >> a >> b;
        if(a>b)
            cout << '>' <<endl;
        else if(a<b)
            cout << '<' <<endl;
        else
            cout << '=' <<endl;
    }

    }
    return 0;
}

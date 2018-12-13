#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int a=0;

    while(getline(cin,str))
    {
        if(str.length()==0)
            break;
        cout << str << endl;
        a++;
    }

    cout << a;

    return 0;
}

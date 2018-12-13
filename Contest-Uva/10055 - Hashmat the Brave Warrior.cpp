#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    unsigned long long int a,b,temp;
    while(cin >>a>>b)
    {

        if(cin.eof())
            break;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        cout << a-b << endl;
    }

    return 0;
}

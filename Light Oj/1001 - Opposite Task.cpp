#include<iostream>
#include<cstdio>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int testCase;
    while(s(testCase)==1)
    {
        int a;
        for(int i=0;i<testCase; i++)
        {
            cin >> a ;

            a<11?cout << "0 "<< a << endl:cout << a-10 <<' '<< a-(a-10) << endl;
        }

    }
    return 0;
}


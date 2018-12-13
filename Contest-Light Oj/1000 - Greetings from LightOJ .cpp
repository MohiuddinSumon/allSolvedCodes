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
        int a,b;
        for(int i=0;i<testCase; i++)
        {
            cin >> a >>b;
            cout << "Case " << i+1 << ": " << a+b << endl;
        }

    }
    return 0;
}

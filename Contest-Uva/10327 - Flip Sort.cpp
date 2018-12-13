#include<iostream>
#include<cstdio>
#define s(n) scanf("%d",&n)

using namespace std;

int main()
{
    int testCase;
    while(s(testCase)==1)
    {
        int num[testCase],flag=0,temp;
        for(int i=0; i<testCase; i++)
        {
            cin >> num[i];
        }
        for(int i=0; i<testCase; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(num[j]>num[i])
                {
                    flag++;
                }
            }

        }

        cout << "Minimum exchange operations : " << flag << endl;

    }

    return 0;
}

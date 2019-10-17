#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int testCase;
    while(scanf("%d",&testCase)==1)
    {

        if(testCase==0)
            return 0;
        else
        {
            if(testCase>101)
                cout << "f91(" << testCase << ") = " << testCase-10 << endl;
            else
                cout << "f91(" << testCase << ") = 91" << endl;
        }
    }

    return 0;
}

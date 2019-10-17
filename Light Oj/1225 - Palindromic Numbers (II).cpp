#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase,i;
    string number;
    cin >> testCase;
    for(i=0;i<testCase;i++)
    {

        cin >> number;

        (number==reverse(number)) ? cout << "Case " << i+1 <<": Yes" <<endl : cout << "Case " << i+1 <<": No" <<endl;

    }

    return 0;
}


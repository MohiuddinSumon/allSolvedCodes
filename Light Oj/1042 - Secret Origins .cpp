#include<iostream>

using namespace std;

int main()
{
    int testCase,num1,num2,reminder,ans,j,reminer;
    cin >>testCase;
    for(int i=0; i<testCase; i++)
    {
        cin >> num1;
        num2=num1+1;
        reminder=0;
        while(num1!=0)
        {
            reminder+=num1%2;
            num1/=2;
        }
        ans=reminder;
        reminer=0;
        for(j=num2; reminer!=ans; j++)
        {
            reminder=0;
            num2=j;
            while(num2!=0)
            {
                reminder+=num2%2;
                num2/=2;
            }
            reminer=reminder;
        }
        cout <<"Case " << i+1 <<": "<< j-1 <<endl;
    }

    return 0;
}

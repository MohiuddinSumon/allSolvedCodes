#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testCase,i,arr[3];
    cin >> testCase;
    for(i=0;i<testCase;i++)
    {
        for(int j=0;j<3; j++)
        {
            cin >> arr[j];
        }
        sort(arr,arr+3);
        (((arr[0]*arr[0])+(arr[1]*arr[1]))==(arr[2]*arr[2])) ? cout << "Case " << i+1 <<": yes"<<endl : cout << "Case " << i+1 <<": no"<<endl;

    }

    return 0;
}

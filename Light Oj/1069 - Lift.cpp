#include<iostream>

using namespace std;

int main()
{
    int testCase,i,currentFloor,liftFloor;
    cin >> testCase;
    for(i=0;i<testCase;i++)
    {

        cin >> currentFloor >> liftFloor;
        (currentFloor<liftFloor) ? cout << "Case " << i+1 <<": "<< (liftFloor*4)+19 <<endl : cout << "Case " << i+1 <<": "<<(((currentFloor-liftFloor)+currentFloor)*4)+19<<endl;

    }

    return 0;
}

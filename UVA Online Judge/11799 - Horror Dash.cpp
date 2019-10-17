#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int testCase,lineCase;
    cin >> testCase;
    for(int i=0; i<testCase; i++)
    {
        cin >> lineCase;
        int student[lineCase];
        for(int j=0; j<lineCase; j++)
        {
            cin >> student[j];
        }

        sort(student,student+(lineCase));

        cout << "Case " << i+1 << ": " << student[lineCase-1] << endl;
    }

    return 0;
}

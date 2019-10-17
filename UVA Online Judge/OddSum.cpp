#include<iostream>

using namespace std;

int main()
{
    int testCase,low,high,i,j,oddsum;
    cin >> testCase;
    for(i=0;i<testCase;i++)
    {
        cin >> low >> high;
        oddsum=0;
        for(j=low;j<=high;j++)
        {
            if(j%2!=0)
            {
                oddsum+=j;
            }
        }
        cout << "Case " << i+1 << ": " << oddsum << endl;
    }

    return 0;
}

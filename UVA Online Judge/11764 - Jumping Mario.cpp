#include<iostream>

using namespace std;

int main()
{
    int testCase,wallNumber,x,y,up,low;

    cin >> testCase;
    for(int i=0;i<testCase;i++)
    {
        cin >> wallNumber >> x;

        up=low=0;

        for(int j=0;j<wallNumber-1;j++)
        {
            cin >> y;
            if(x<y)
            {
                up++;
            }
            else if(x>y)
            {
                low++;
            }

            x=y;
        }

        cout << "Case " << i+1 << ": " << up << ' ' << low <<endl;
    }

    return 0;
}

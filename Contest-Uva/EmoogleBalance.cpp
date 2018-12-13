#include<iostream>

using namespace std;

int main()
{
    int test,reason,given,a,cas=1;

    while(cin >> test)
    {
        if(test==0)
            break;
        given=0,reason=0;

        for(int i=0;i<test;i++)
        {
            cin >> a;
            if(a==0)
                given++;
            else
                reason++;
        }
        cout << "Case "<<cas<<": "<<reason-given << endl;
        cas++;

    }

}

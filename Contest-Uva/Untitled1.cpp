#include<iostream>
using namespace std;

int main()
{
    int d1,m1,d2,m2,testCase;
    cin>>testCase;
    for(int i=1; i<=testCase; i++)
    {
        cin >> d1 >>m1 >>d2 >> m2;
        cout << "Case " <<i<<": ";
        if(m1>12)
        {
            if(d1==d2)
            {
                if(m1<m2)
                    cout << "Okay got it!"<<endl;
                else
                    cout << "I am sure there is some kinda mistake!"<<endl;
            }
            else if(d1<d2)
                cout << "Okay got it!"<<endl;
            else
                cout << "I am sure there is some kinda mistake!"<<endl;

        }
        else if(m2>12)
        {
            if(d1==d2)
            {
                if(m1<m2)
                    cout << "Okay got it!"<<endl;
                else
                    cout << "I am sure there is some kinda mistake!"<<endl;
            }
            else if(d1<d2)
            {
                cout << "Okay got it!"<<endl;
            }
            else
            {
                cout << "I am sure there is some kinda mistake!"<<endl;
            }
        }
        else if(m1<m2)
        {
            if(d1<d2)
                cout << "Oh no it is ambiguous!"<<endl;
            else
                cout << "I am sure there is some kinda mistake!"<<endl;
        }
        else
            cout << "I am sure there is some kinda mistake!"<<endl;
    }

    return 0;
}

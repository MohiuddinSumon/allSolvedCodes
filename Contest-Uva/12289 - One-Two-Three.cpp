#include<iostream>
#include<cstring>


using namespace std;

int main()
{
    int testCase;
    char num[10];
    cin >> testCase;
    for(int i=0; i<testCase; i++)
    {
        cin >> num;
        int length;
        length=strlen(num);
        if(length==5)
            cout << 3 <<endl;
        else
        {
            if(num[0]=='o')
            {
                if(num[1]=='n'||num[2]=='e')
                    cout << 1 <<endl;
                else
                    cout << 2 <<endl;
            }

            else if(num[1]=='n')
            {
                if(num[0]=='o'||num[2]=='e')
                    cout << 1 <<endl;
                else
                    cout << 2 <<endl;
            }
            else  if(num[2]=='e')
            {
                if(num[0]=='o'||num[1]=='n')
                    cout << 1 <<endl;
                else
                    cout << 2 <<endl;
            }

            else
                cout << 2 << endl;

        }
    }

}


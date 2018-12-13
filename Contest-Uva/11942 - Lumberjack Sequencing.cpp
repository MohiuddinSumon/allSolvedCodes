#include<iostream>
#include<algorithm>

using namespace std;
int chkAssending(int array[]);
int chkDessending(int array[]);
bool comp(int x,int y);

int main()
{
    int testCase,lumber[10];
    cin >> testCase;
    int ans[testCase];
    for(int i=0; i<testCase; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> lumber[j];
        }

        if(chkAssending(lumber)==0)
        {
            ans[i]=1;
        }
        else if(chkDessending(lumber)==0)
        {
            ans[i]=1;
        }
        else
        {
            ans[i]=0;
        }
    }

    cout << "Lumberjacks:" << endl;
    for(int i=0; i<testCase; i++)
    {
        if(ans[i]==1)
        {
            cout << "Ordered" << endl;
        }
        else
        {
            cout << "Unordered" << endl;
        }

    }


    return 0;
}

int chkAssending(int lumber[])
{
    int temp[10];
    for(int i=0; i<10; i++)
    {
        temp[i]=lumber[i];
    }

    sort(temp,temp+10);

    for(int i=0; i<10; i++)
    {
        //cout << temp[i] <<' ';
        if(temp[i]!=lumber[i])
            return 1;
    }

    return 0;

}



int chkDessending(int lumber[])
{
    int temp[10];
    for(int i=0; i<10; i++)
    {
        temp[i]=lumber[i];
    }

    sort(temp,temp+10,comp);

    for(int i=0; i<10; i++)
    {
        if(temp[i]!=lumber[i])
            return 1;
    }

    return 0;

}


bool comp(int x,int y)
{
    if(x>y) return true;
    return false;
}

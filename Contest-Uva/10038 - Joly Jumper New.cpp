#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

int chkAssending(int array[],int testCase);
int chkDessending(int array[],int testCase);
int equal(int array[],int testCase);
bool comp(int x,int y);

using namespace std;

int main()
{
    int testCase,x,y;
    while(scanf("%d",&testCase)==1)
    {
        cin >> x;
        int jumper[3000],j,flag=0;
        j=testCase-1;
        for(int i=0; i<testCase-1; i++)
        {
            cin >> y;
            jumper[i]=abs(x-y);
            x=y;
        }


        for(int i=0; i<testCase-1; i++)
        {

            cout << jumper[i] << endl;

        }


        if(chkAssending(jumper,testCase-1)==0)
        {
            cout <<"Jolly" <<endl;
        }
        else if(chkDessending(jumper,testCase-1)==0)
        {
            cout <<"Jolly" <<endl;
        }
        else
        {
            cout <<"Not jolly" <<endl;
        }
    }



    return 0;

}

int chkAssending(int jumper[],int testCase)
{
    int temp[3000];
    for(int i=0; i<testCase; i++)
    {
        temp[i]=jumper[i];
    }

    sort(temp,temp+testCase);

    for(int i=0; i<testCase; i++)
    {
        if(temp[i]!=jumper[i])
            return 1;

    }
    for(int i=0; i<testCase-1; i++)
    {
        if(temp[i+1]-temp[i]!=1)
            return 1;
    }

    return 0;

}



int chkDessending(int jumper[],int testCase)
{
    int temp[3000];
    for(int i=0; i<testCase; i++)
    {
        temp[i]=jumper[i];
    }

    sort(temp,temp+testCase,comp);

    for(int i=0; i<testCase; i++)
    {
        if(temp[i]!=jumper[i])
            return 1;
    }
    for(int i=0; i<testCase-1; i++)
    {
        if(temp[i]-temp[i+1]!=1)
            return 1;
    }

    return 0;

}


bool comp(int x,int y)
{
    if(x>y) return true;
    return false;
}


int equal(int array[],int testCase)
{

}

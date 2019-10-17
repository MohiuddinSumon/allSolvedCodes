#include<iostream>
#include<cstdio>

long long int intrev(long long int num);
long long int chk(long long int num, long long int rev, int &count);

using namespace std;

int main()
{
    int testCase,count;
    long long int num,rev,ans;

    cin >> testCase;
    for(int i=0; i<testCase; i++)
    {
        count=0;
        cin >> num;
        rev=intrev(num);
        ans=chk(num,rev,count);


        cout << count <<' ' << ans <<endl;

    }

    return 0;
}



long long int intrev(long long int num)
{

    long long int rev=0;
    while(num>0)
    {
        rev *=10;
        rev +=num%10;
        num /=10;
    }
    //cout <<"REV = "<<rev <<endl;
    return rev;
}



long long int chk(long long int num,long long int rev,int &count)
{
    long long int ans;

    //cout <<" CHK START "<<endl;

    if(num == rev)
    {

        return num;
    }
    else
    {
        num+=rev;
        rev=intrev(num);
        count++;
        chk(num,rev,count);
    }
    //ans=num;
    //cout <<"Chk result = "<< ans <<endl;

    //return ans;
}

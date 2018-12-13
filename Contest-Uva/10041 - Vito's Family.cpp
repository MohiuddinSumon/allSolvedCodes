#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int testCase,relative,stNum,ans,flag,a,b;
    multiset<int>street;
    s(testCase);
    for(int i=0; i<testCase; i++)
    {
        s(relative);
        for(int j=0; j<relative; j++)
        {
            s(stNum);
            street.insert(stNum);
        }
        multiset<int> :: iterator ait=street.begin();
        multiset<int> :: iterator bit=street.begin();

        relative=stNum=0;
        flag=street.size()/2;

        if((street.size()%2)!=0)
        {
            advance(ait,flag);
            ans = *ait;
        }
        else
        {
            advance(ait,flag-1);
            a=*ait;
            advance(bit,flag);
            b=*bit;
            ans = (a+b)/2;
        }


        for(ait=street.begin(); ait!=street.end(); ait++)
        {
            relative+=abs(*ait-ans);
        }


        pf("%d\n",relative);
        street.clear();
    }

    return 0;
}

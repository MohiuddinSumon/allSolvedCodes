#include<iostream>
#include<cstdio>
#include<set>

#include<algorithm>

#define s(n) scanf("%d",&n)

using namespace std;

int main()
{
    int n,i,flag,a,b;
    multiset<int> seris;
    while(s(n)==1)
    {
        multiset<int> :: iterator ait=seris.begin();
        multiset<int> :: iterator bit=seris.begin();
        seris.insert(n);
        flag=seris.size()/2;
        if((seris.size()%2)!=0)
        {
            advance(ait,flag);
            cout << *ait <<endl;
        }
        else
        {
            advance(ait,flag-1);
            a=*ait;
            advance(bit,flag);
            b=*bit;
            cout << (a+b)/2 << endl;
        }

    }

    return 0;
}


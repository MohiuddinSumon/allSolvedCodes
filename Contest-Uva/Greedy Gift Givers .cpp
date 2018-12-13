#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int testCase;
    string name;
    while(s(testCase)==1)
    {
        vector<string> people;
        vector<int> balance(testCase,0);
        int a,b;
        for(int i=0; i<testCase; i++)
        {
            cin >> name;
            people.push_back(name);
        }
        for(int i=0; i<testCase; i++)
        {
            cin >> name >> a >> b;
            vector<string> :: iterator sit=people.begin();
                vector<int> :: iterator iit=balance.begin();
                for( ; sit!=people.end(); sit++,iit++)
                {
                    if(name == *sit && a!=0 && b!=0)
                        *iit-=(a/b)*b;
                }
            for(int j=0; j<b; j++)
            {
                cin >> name;
                vector<string> :: iterator sit=people.begin();
                vector<int> :: iterator iit=balance.begin();
                for( ; sit!=people.end(); sit++,iit++)
                {
                    if(name == *sit)
                        *iit+=(a/b);
                }
            }
        }
        vector<string> :: iterator sit=people.begin();
        vector<int> :: iterator iit=balance.begin();
        for( ; sit!=people.end(); sit++,iit++)
        {
            cout<< *sit <<' '<<*iit << endl;
        }

        people.clear();
        balance.clear();
    }

    return 0;
}


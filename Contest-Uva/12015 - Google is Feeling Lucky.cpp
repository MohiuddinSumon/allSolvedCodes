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
    vector<string> vecStr;
    vector<int> vecInt;
    string site;
    int num,testCase;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        int flag = 0;
        for(int i=0; i<10; i++)
        {
            cin >> site >> num;
            vecStr.push_back(site);
            vecInt.push_back(num);
            if(num>flag)
                flag=num;
        }
        auto sit=vecStr.begin();
        pf("Case #%d:\n",i);

        for(auto it=vecInt.begin(); it!=vecInt.end(); it++,sit++)
        {
            if(*it==flag)
                cout << *sit << endl;
        }
        vecStr.clear(),vecInt.clear();
    }

    return 0;
}

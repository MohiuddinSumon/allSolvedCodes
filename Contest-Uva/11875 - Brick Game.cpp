#include<bits/stdc++.h>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{

    int testCase,teamMember,temp;
    vector<int> team;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s(teamMember);
        for(int j=0; j<teamMember; j++)
        {
            s(temp);
            team.push_back(temp);
        }
        pf("Case %d: %d\n",i,team[(teamMember/2)]);
        team.clear();
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf


int main()
{
    int testNo,instructNo,pos,samepo;
    vector<int> instruction;
    string str;

    s(testNo);
    while(testNo--)
    {
        pos=0;
        instruction.clear();
        s(instructNo);
        getchar();
        for(int i=1; i<=instructNo; i++)
        {
            getline(cin,str);
            if(str == "LEFT")
            {
                pos -= 1;
                instruction.push_back(-1);
            }
            else if(str == "RIGHT")
            {
                pos += 1;
                instruction.push_back(1);
            }
            else
            {
                sscanf(str.c_str(),"%*s %*s %d",&samepo);
                pos += instruction[samepo-1];
                instruction.push_back(instruction[samepo-1]);
            }
        }
        pf("%d\n",pos);
    }


    return 0;
}

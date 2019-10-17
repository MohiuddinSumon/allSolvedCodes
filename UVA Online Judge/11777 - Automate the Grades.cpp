#include<bits/stdc++.h>

using namespace std;
#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int testCase,temp,sum;
    char grade;
    vector<int> ct;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        sum=0;
        for(int j=0; j<4; j++)
        {
            s(temp);
            sum+=temp;
        }
        for(int k=0; k<3; k++)
        {
            s(temp);
            ct.push_back(temp);
        }
        sort(ct.begin(),ct.end());
        sum+= ((ct[2]+ct[1])>>1);

        if(sum>=90 && sum<=100)
            grade='A';
        else if(sum>= 80 && sum < 90)
            grade='B';
        else if(sum>= 70 && sum < 80)
            grade='C';
        else if(sum>= 60 && sum < 70)
            grade='D';
        else
            grade='F';
        pf("Case %d: %c\n",i,grade);
        ct.clear();
    }


    return 0;
}

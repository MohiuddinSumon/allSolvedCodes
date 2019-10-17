#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf

int divResult[1001];

void divResultFunc()
{
    int sqrtN,sum;

    for(int i=1; i<=1000; i++)
    {
        sqrtN = int( sqrt( (double) i));
        sum=0;
        for(int j=1; j<=sqrtN; j++)
        {
            if(i%j == 0 )
            {
                if(j != (i/j))
                sum+=j+(i/j);
                else
                sum += j;
            }
        }
        if(sum>0 && sum<=1000)
        {
            divResult[sum]=i;
        }
    }
}



int main()
{
    memset(divResult,-1,sizeof(divResult));
    divResultFunc();

    int n,testNo=1;

    while(s(n)==1 && n!=0)
    {
        pf("Case %d: %d\n",testNo++,divResult[n]);
    }

    return 0;
}

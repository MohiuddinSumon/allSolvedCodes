#include<bits/stdc++.h>

using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int testCase,reports,temp,temp2,sum,flag;
    s(testCase);
    for(int i=1; i<=testCase; i++)
    {
        s(reports);
        sum=0;

        temp=2;
        for(int j=0; j<reports; j++)
        {
            s(temp2);

            flag=temp2-temp;
            if(flag>0 && flag<6)
                sum++;
            else if(flag!=0)
            {
                if(flag%5==0)
                    sum+=(flag/5);
                else
                    sum+=(flag/5)+1;
            }
            temp=temp2;
        }
        pf("Case %d: %d\n",i,sum);

    }

    return 0;
}

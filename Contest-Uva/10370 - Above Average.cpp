#include<iostream>
#include<cstdio>

using namespace std;


int main()
{
    int testCase,total,student[1005];
    float ans,avg;

    cin >> testCase;
    for(int i=0; i<testCase; i++)
    {
        cin >> total;
        int allStudent=0,count=0;
        for(int j=0; j<total; j++)
        {
            cin >> student[j];
            allStudent+=student[j];
        }
        avg=(float)(allStudent/total);
        for(int j=0; j<total; j++)
        {
            if(student[j]>avg)
            {
                count++;
            }
        }

        ans=(float)(100*count)/total;

        printf("%.3f%\n",ans);

    }



    return 0;
}

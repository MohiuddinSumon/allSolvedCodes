#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int testCase,x,y;
    while(scanf("%d%d",&testCase,&x)==2)
    {
        int flag=0,j=testCase-1,temp,ans[testCase];
        for(int i=0; i<testCase-1; i++)
        {
            cin >>y;
            ans[i]=abs(x-y);
            x=y;
        }


        if(ans[0]==1)
        {
            j=1;
            for(int i=0; i<testCase-1; i++)
            {

                if(ans[i]!=j)
                {
                    flag=-1;
                    break;
                }
                j++;
            }

        }
        else if(ans[0]==j)
        {

            for(int i=0; i<testCase-1; i++)
            {
                if(ans[i]!=j)
                {
                    flag=-1;
                    break;
                }
                j--;
            }

        }


        if(flag==-1)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" <<endl;
    }

    return 0;
}

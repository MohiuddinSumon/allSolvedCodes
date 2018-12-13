#include<iostream>
#include<cstdio>

#define s(n,m) scanf("%d%d",&n,&m)
#define sl(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int inp;
    while(sl(inp)==1)
    {
        int test,result,symbol = 1;
        while(inp != 0)
        {
            test=inp%10;
            inp/=10;
            if(symbol == 1)
            {
                if(test >= 5 && test != 9)
                {
                    result = 2+(test-5);
                }
                else if(test < 5 && test != 4)
                {
                    result = test;
                }
                else
                {
                    result = 3;
                }
            }
            else if(symbol == 2)
            {
                if(test >= 5 && test != 9)
                {
                    result+= (2+(2*(test-5)));
                }
                else if(test < 5 && test != 4)
                {
                    result += 2*test;
                }
                else
                {
                    result+=4;
                }
            }
            else if( symbol == 3)
            {
                if(test >= 5 )
                {
                    (test!=9) ? result+= (3+(2*(test-5))) : result+=6 ;
                }
                else
                {
                    (test!=4) ? result += 2*test : result+=5;
                }
            }
            else
            {
                result += 4*test;
            }
            symbol++;
        }
        pf("%d\n",result);
    }

    return 0;
}

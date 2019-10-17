#include<iostream>
#include<cstdlib>


using namespace std;

int main()
{
    int test,stall,i,j,temp=0,min=99,max=0;
    cin >> test;
    if(1<=test && test <=100)
    {
        for(i=0;i<test;i++)
            {
                max=0,min=0;
                cin >> stall;
                cin >> temp;
                min=temp;
                max=temp;

                for(j=0;j<stall-1;j++)
                    {
                        cin >> temp;
                        if(temp<=min)
                        {
                            min=temp;
                        }

                        if(temp>=max)
                        {
                            max=temp;
                        }

                    }
                cout << 2*(max-min) << endl;
            }
    }

}


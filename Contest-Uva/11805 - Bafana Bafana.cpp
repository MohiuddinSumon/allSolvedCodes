#include<iostream>

using namespace std;

int main()
{
    int testCase,allPlayer,Start,Pass,End,i;

    cin >> testCase;
    for(i=0; i<testCase; i++)
    {
        cin >> allPlayer >> Start >> Pass ;
        if(Pass>=allPlayer)
        {
            End=Start+(Pass%allPlayer);
            if(End>allPlayer)
            {
                End=(End%allPlayer);
            }

        }
        else
        {
            End=(Pass+Start);
            if(End>allPlayer)
            {
                End=(End%allPlayer);
            }
        }



        cout <<"Case "<< i+1 << ": " << End << endl;
    }

    return 0;
}

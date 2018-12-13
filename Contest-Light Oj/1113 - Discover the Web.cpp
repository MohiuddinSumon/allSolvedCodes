#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
    int testCase;
    list<string>flist,blist;
    string input;
    cin >> testCase;
    for(int i=1; i<=testCase; i++)
    {
        printf("Case %d:\n",i);
        blist.push_front("http://www.lightoj.com/");
        while((cin>>input) && input!="QUIT")
        {
            if(input=="VISIT")
            {
                flist.clear();
                cin >> input;
                cout<<input<<endl;
                blist.push_front(input);
            }
            else if(input=="BACK")
            {
                if(blist.size()==1)
                {
                     cout<<"Ignored"<<endl;
                }
                else
                {
                    flist.push_front(blist.front());
                    blist.pop_front();
                    cout<< blist.front() <<endl;

                }
            }
            else if(input=="FORWARD")
            {
                if(flist.size()==0)
                 {
                     cout<<"Ignored"<<endl;
                 }
                else
                {
                    blist.push_front(flist.front());
                    cout<< flist.front() <<endl;
                    flist.pop_front();
                }
            }
        }
        flist.clear(),blist.clear();
    }

    return 0;
}

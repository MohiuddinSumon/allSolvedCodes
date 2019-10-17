#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
    int n,m,testCase,temp;
    string command;
    cin>>testCase;
    for(int i=1; i<=testCase; i++)
    {
        cin >> n >> m;
        deque<int> mydeck;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0; j<m; j++)
        {
            cin>> command;
            if(command=="pushLeft")
            {
                cin>>temp;
                if(mydeck.size()!=n)
                {
                    mydeck.push_front(temp);
                    cout<<"Pushed in left: "<<temp<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(command=="pushRight")
            {

                cin>>temp;
                if(mydeck.size()!=n)
                {
                    mydeck.push_back(temp);
                    cout<<"Pushed in right: "<<temp<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;

            }
            else if(command=="popLeft")
            {
                if(!mydeck.empty())
                {
                    cout<<"Popped from left: "<<mydeck.front()<<endl;
                    mydeck.pop_front();
                }
                else
                    cout<<"The queue is empty"<<endl;

            }
            else if(command=="popRight")
            {
                if(!mydeck.empty())
                {
                    cout<<"Popped from right: "<<mydeck.back()<<endl;
                    mydeck.pop_back();
                }
                else
                    cout<<"The queue is empty"<<endl;

            }

        }
        mydeck.clear();
    }

    return 0;
}

//https://soundcloud.com/mahbub-bd/ja-pakhi-urte-dilam-toke


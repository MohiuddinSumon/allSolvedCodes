#include<bits/stdc++.h>
using namespace std;


#define pf printf

int main()
{
    int hour,minute,sec,speed=0;
    double distance=0.0,ttime,qtime;
    char colon;
    string a;
    while(1)
    {
        //cout <<"KIDU>>";
        getline(cin,a);
        if(find(a.begin(),a.end(), ' ')!=a.end())
        {
            hour=(a[0]-48)*10+a[1]-48;
            cout<<hour <<endl;
            minute=(a[3]-48)*10+a[4]-48;
            cout<<minute <<endl;
            sec=(a[6]-48)*10+a[7]-48;
             cout<<sec <<endl;
            speed=(a[9]+a.end())-48;
            cout<<speed;

            ttime=(hour*3600)+(minute*60)+(sec);
            cout<<ttime<<endl<<endl;
        }
        else
        {
            hour=(a[0]-48)*10+a[1]-48;
            cout<<hour <<endl;
            minute=(a[3]-48)*10+a[4]-48;
            cout<<minute <<endl;
            sec=(a[6]-48)*10+a[7]-48;
             cout<<sec <<endl;
            qtime=(hour*3600)+(minute*60)+(sec);
            ttime=qtime-ttime;
            cout<<ttime<<endl<<endl;
            (ttime<3600) ? distance=(speed/ttime) : distance=(speed*ttime);
            cout<<a;
            pf(" %.2f km\n",distance);
        }
        //fscanf(a,"%d,%d,%d,%d",&hour,&minute,&sec,&speed);
    }

    return 0;
}

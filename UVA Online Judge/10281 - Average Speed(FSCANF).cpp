#include<bits/stdc++.h>
using namespace std;


#define pf printf

int main()
{
    int hour,minute,sec,speed=0,nspeed;
    double temp=0,odistance=0,distance=0,ttime=0,qtime,ottime=0;
    int colon=0;
    string a,b;
    while(getline(cin,a))
    {
        if(sscanf(a.c_str(),"%d:%d:%d %d",&hour,&minute,&sec,&nspeed)==4)
        {
            colon++;
            ottime=(hour*3600)+(minute*60)+sec;
            ottime-=ttime;
            odistance+=((speed*ottime)/3600);
            speed=nspeed;
            ttime+=ottime;
        }
        else
        {

            qtime=(hour*3600)+(minute*60)+sec;
            qtime-=ttime;
            distance=((speed*qtime)/3600)+odistance;
            pf("%s %.2lf km\n",a.c_str(),distance);
        }
    }
    return 0;
}

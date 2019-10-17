#include<iostream>
#include<cstdio>
#include<set>

#define s1(n) scanf("%d",&n)
#define s4(n,m,o,p) scanf("%d%d%d%d",&n,&m,&o,&p)
#define pf printf

using namespace std;

int main()
{
    int person,budget,hotel,week,price,rm;
    set<int> room;
    set<int> result;
    set<int> :: iterator it;
    while(s4(person,budget,hotel,week)==4)
    {
        for(int i=0; i<hotel; i++)
        {
            s1(price);
            for(int j=0; j<week; j++)
            {
                s1(rm);
                room.insert(rm);
            }
            it=room.end();
            it--;
            if(*it>=person && (price*person)<=budget )
                result.insert(price*person);
            else
                room.clear();
        }
        it=result.begin();
        (*it==0) ? pf("stay home\n") : pf("%d\n",*it);
        room.clear(),result.clear();
    }
    return 0;
}

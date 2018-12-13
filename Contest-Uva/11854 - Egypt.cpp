#include<iostream>
#include<cstdio>
#include<algorithm>

#define s(n,m,o) scanf("%d%d%d",&n,&m,&o)
#define pf printf

using namespace std;

int main()
{
    int egypt[3];
    while(s(egypt[0],egypt[1],egypt[2])==3 && egypt[0]!=0 && egypt[1]!=0 && egypt[2]!=0)
    {
        sort(egypt,egypt+3);
        ((egypt[0]*egypt[0])+(egypt[1]*egypt[1]) == (egypt[2]*egypt[2]) ) ? pf("right\n") : pf("wrong\n");
    }

    return 0;
}

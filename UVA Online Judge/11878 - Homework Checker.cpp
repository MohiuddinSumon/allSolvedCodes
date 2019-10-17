#include<iostream>
#include<cstdio>
#include<cstdlib>

#define s(n,m,o,p) scanf("%d%c%d%c",&n,&m,&o,&p)
#define pf printf

using namespace std;

int main()
{
    int a,b,count=0;
    char eq,plusMinus;
    char c[4];
    while(s(a,plusMinus,b,eq)==4)
    {
        cin >> c;
        if(c[0]!='?')
        {
        if(plusMinus=='+')
            if(atoi(c)==a+b) count++;
        if(plusMinus == '-')
            if(atoi(c)==a-b) count++;
        }
    }
    cout << count <<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define sc(ch) scanf("%c",&ch)
#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int n,male,female;
    char ch;
    s(n);
    getchar();
    while(n)
    {
        n--;
        male=female=0;
        while(sc(ch) && ch!= '\n')
        {
            if(ch == 'M') male++;
            else if(ch == 'F') female++;
        }

        (male==female && male > 1) ? pf("LOOP\n") : pf("NO LOOP\n");
    }

    return 0;
}

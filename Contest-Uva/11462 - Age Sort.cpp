#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int n;
    while(s(n)==1 && n!=0)
    {
        int people[n];
        for(int i=0; i<n; i++)
        {
            s(people[i]);
        }

        sort(people,(people+n));

        for(int i=0; i<n; i++)
        {
            cout << (people[i]) ;
            if(i!=n-1)
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}

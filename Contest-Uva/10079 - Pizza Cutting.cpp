#include<iostream>
#include<cstdio>
#define s(n) scanf("%d",&n)

using namespace std;

int main()
{
    int line;
    while(s(line)==1)
    {
        if(line<0) return 0;
        long long int ans=1;
        for(int i=1; i<=line; i++)
        {
            ans+=i;
        }

        cout << ans << endl;
    }

    return 0;
}

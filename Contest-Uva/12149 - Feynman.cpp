#include<bits/stdc++.h>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;

int main()
{
    int input;
    long long int output;

    while(s(input) && input!=0 )
    {
        output=0;
        while(input)
        {
            output+=pow(input,2);
            input--;
        }
        pf("%d\n",output);
    }

    return 0;
}

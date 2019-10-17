#include<iostream>

#include<cstdio>

using namespace std;

int main()
{
    int n,r;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int flag=0,r=0;
        while(flag!=-1)
        {
            r+=(n%10);
            n/=10;
            if(n==0 && r<10)
            {
                cout << r << endl;
                flag=-1;
            }
            else if(n==0 && r>=10)
            {
                n=r;
                r=0;
            }
        }

    }

    return 0;
}
